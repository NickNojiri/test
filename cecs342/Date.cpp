#include <iomanip>
#include "Date.h"

// single definition of static
int Date::objectCount = 0;

// def
Date::Date() {
    date = new int[3];
    date[0] = 1;
    date[1] = 1;
    date[2] = 1970;
    ++objectCount;
}

// overload
Date::Date(int m, int d, int y) {
    date = new int[3];
    if (isValidDate(m, d, y)) {
        date[0] = m;
        date[1] = d;
        date[2] = y;
    } else {
        date[0] = 1;
        date[1] = 1;
        date[2] = 1970;
    }
    ++objectCount;
}

// j date (julian day)
Date::Date(int j) {
    date = new int[3];
    julianToGregorian(j);
    ++objectCount;
}

// Copy constr
Date::Date(const Date& other) {
    date = new int[3];
    date[0] = other.date[0];
    date[1] = other.date[1];
    date[2] = other.date[2];
    ++objectCount;
}

// need because dynamic
Date::~Date() {
    delete[] date;
    date = nullptr;
    --objectCount;
}

// assignment op
Date& Date::operator=(const Date& other) {
    if (this == &other) return *this; // self-assign guard
    if (!date) date = new int[3];     // ensure storage exists

    if (isValidDate(other.date[0], other.date[1], other.date[2])) {
        date[0] = other.date[0];
        date[1] = other.date[1];
        date[2] = other.date[2];
    } else {
        date[0] = 1;
        date[1] = 1;
        date[2] = 1970;
    }
    return *this;
}

// getters
int Date::getMonth() const { return date[0]; }
int Date::getDay() const   { return date[1]; }
int Date::getYear() const  { return date[2]; }

std::string Date::getDayName() const {
    const std::string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    return days[dayOfWeek()];
}
std::string Date::getMonthName() const {
    const std::string months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    return months[date[0] - 1];
}

int Date::julian() const {
    return gregorianToJulian();
}

// static
int Date::GetDateCount() {
    return objectCount;
}

// helpers
bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Date::dayOfWeek() const {
    int jd = gregorianToJulian();
    return (jd + 1) % 7;
}

bool Date::isValidDate(int m, int d, int y) const {
    if (y < 1 || m < 1 || m > 12 || d < 1) return false;
    return d <= daysInMonth(m, y);
}

int Date::daysInMonth(int m, int y) const {
    const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2 && isLeapYear(y)) return 29;
    return days[m - 1];
}

void Date::julianToGregorian(int jd) {
    int l = jd + 68569;
    int n = 4 * l / 146097;
    l = l - (146097 * n + 3) / 4;
    int i = 4000 * (l + 1) / 1461001;
    l = l - 1461 * i / 4 + 31;
    int j = 80 * l / 2447;
    int k = l - 2447 * j / 80;
    l = j / 11;
    j = j + 2 - 12 * l;
    i = 100 * (n - 49) + i + l;

    date[2] = i; // Year
    date[0] = j; // Month
    date[1] = k; // Day
}

int Date::gregorianToJulian() const {
    int i = date[2];
    int j = date[0];
    int k = date[1];
    int jd = k - 32075
             + 1461 * (i + 4800 + (j - 14) / 12) / 4
             + 367 * (j - 2 - (j - 14) / 12 * 12) / 12
             - 3 * ((i + 4900 + (j - 14) / 12) / 100) / 4;
    return jd;
}

// ops
void Date::addDays(int days) {
    int jd = gregorianToJulian() + days;
    julianToGregorian(jd);
}

Date& Date::operator+=(int days) { addDays(days); return *this; }
Date& Date::operator-=(int days) { addDays(-days); return *this; }

Date Date::operator+(int days) const { Date t(*this); t.addDays(days); return t; }
Date Date::operator-(int days) const { Date t(*this); t.addDays(-days); return t; }

int Date::operator-(const Date& other) const {
    return this->gregorianToJulian() - other.gregorianToJulian();
}

// inc/dec
Date& Date::operator++()    { addDays(1);  return *this; }  // pre
Date  Date::operator++(int) { Date t(*this); addDays(1); return t; } // post
Date& Date::operator--()    { addDays(-1); return *this; } // pre
Date  Date::operator--(int) { Date t(*this); addDays(-1); return t; } // post

// comparisons
bool Date::operator==(const Date& o) const { return date[0]==o.date[0] && date[1]==o.date[1] && date[2]==o.date[2]; }
bool Date::operator!=(const Date& o) const { return !(*this == o); }
bool Date::operator<(const Date& o)  const { return gregorianToJulian() <  o.gregorianToJulian(); }
bool Date::operator>(const Date& o)  const { return gregorianToJulian() >  o.gregorianToJulian(); }
bool Date::operator<=(const Date& o) const { return !(*this > o); }
bool Date::operator>=(const Date& o) const { return !(*this < o); }
// so many typos
// friends
Date operator+(int days, const Date& d) { return d + days; }

std::ostream& operator<<(std::ostream& os, const Date& d) {
    os << d.date[0] << "/" << d.date[1] << "/" << d.date[2];
    return os;
}
