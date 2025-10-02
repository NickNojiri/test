#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date() {
    date= new int[3];
    date[0] = 1;
    date[1] = 1;
    date[2] = 1970;

    objectCount++;
}

//Overload
Date::Date(int m, int d, int y)
{
    date = new int[3];
    if(isValidDate(m, d, y))
    {
        date[0] = m;
        date[1] = d;
        date[2] = y;
    }
    else
    {
        date[0] = 1;
        date[1] = 1;
        date[2] = 1970;
    }

    ++objectCount;
}

//j date
Date::Date(int j)
{
    date = new int[3];
    julianToGregorian(j);
    objectiveCount++;
}

Date::Date(const Date& other) {
    date = new int[3];
    date[0] = other.date[0];
    date[1] = other.date[1];
    date[2] = other.date[2];
    objectCount++;
}

Date::~Date()
{
    delete[] date;
    date = nullptr;
    --objectCount;
}

Date& Date::operator=(const Date& other)
{
    if(isValidDate(other.date[0],other.date[1],other.date[2]))
    {
        date[0] = other.date[0];
        date[1] = other.date[1];
        date[2] = other.date[2];
    }
    else
    {
        date[0] = 1;
        date[1] = 1;
        date[2] = 1970;
    }
    return *this;
}

int Date::getMonth() const { return date[0]; }
int Date::getDay() const { return date[1]; }
int Date::getYear() const {return date[2]; }

string Date::getDayName() const {
    const std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                                 "Thursday", "Friday", "Saturday"};
    return days[dayOfWeek()];
}
string Date::getMonthName() const {
    const std::string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                   "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return months[date[0] - 1];
}

int Date::julian() const 
{
    return gregorianToJulian();
}

int Date::count(){
    return objectCount;
}
bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int Date::dayOfWeek() const {
    int jd = gregorianToJulian();
    return (jd + 1) % 7;
}

bool Date::isValidDate(int m,int d, int y) const
{
    if(y < 1 || m < 1 || m > 12 || d < 1)
        return false;
    return d <= daysInMonth(m,y);
}

int Date::daysInMonth(int m, int y)const {
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(m == 2 && isLeapYear(y))
        return 29;
    return days[m -1 ];
}

void Date::julianToGregorian(int jd){
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
    date[0] = j; // 
    date[1] = k; //idk how to read fortran ima ask someone 
}

int Date::gregorianToJulian() const
{
    int i = date[2];
    int j = date[0];
    int k = date[1];

    int jd = k - 32075 + 1461 * (i + 4800 + (j - 14) / 12) / 4 
             + 367 * (j - 2 - (j - 14) / 12 * 12) / 12 
             - 3 * ((i + 4900 + (j - 14) / 12) / 100) / 4; // enable wrap
    return jd;
}

void Date::addDays(int days)
{
    int jd = gregorianToJulian() + days;
    julianToGregorian(jd);
}

Date& Date::operator+=(int days)
{
    addDays(days);
    return *this;
}
Date& Date::operator-=(int days) {
       addDays(-days);
       return *this;
   }

   Date Date::operator-(int days) const {
       Date temp(*this);
       temp.addDays(-days);
       return temp;
   }

Date Date::operator+(int days)const
{
    Date temp(*this);
    temp.addDays(days);
    return temp;
}

int Date::operator-(const Date& other) const
{
    return this->gregorianToJulian() - other.gregorianToJulian();
}

Date& Date::operator++() { // Prefix
    addDays(1);
    return *this;
}

Date Date::operator++(int) { // Postfix
    Date temp(*this);
    addDays(1);
    return temp;
}

Date& Date::operator--() { // Prefix
    addDays(-1);
    return *this;
}

Date Date::operator--(int) { // Postfix
    Date temp(*this);
    addDays(-1);
    return temp;
}

bool Date::operator==(const Date& other) const {
    return date[0] == other.date[0] && 
           date[1] == other.date[1] && 
           date[2] == other.date[2];
}

bool Date::operator<(const Date& other) const {
    return gregorianToJulian() < other.gregorianToJulian();
}

bool Date::operator>(const Date& other) const {
    return gregorianToJulian() > other.gregorianToJulian();
}

bool Date::operator!=(const Date& other) const {
    return !(*this == other);
}

bool Date::operator<=(const Date& other) const {
    return !(*this > other);
}

bool Date::operator>=(const Date& other) const {
    return !(*this < other);
}

// Friend functions
Date operator+(int days, const Date& d) {
    return d + days;
}

ostream& operator<<(ostream& os, const Date& d) {
    os << d.date[0] << "/" << d.date[1] << "/" << d.date[2];
    return os;
}