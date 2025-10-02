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
    if(isValidDate(M,D,Y))
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

