#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

class Date
{
private:
    int* date;
    static int objectCount;   // keeps track of live objects

    // helper funcs
    bool isValidDate(int m, int d, int y) const;
    bool isLeapYear(int y) const;
    int  daysInMonth(int m, int y) const;
    void julianToGregorian(int jd);
    int  gregorianToJulian() const;
    int  dayOfWeek() const;
    void addDays(int days);

public:
    Date();                  // def
    Date(int M, int D,int Y);// overload: month/day/year
    Date(int J);             // fortran (julian day)
    Date(const Date& other); // Copy constr
    ~Date();                 // need because dynamic

    Date& operator=(const Date& other); // assignment op

    // getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    std::string getMonthName() const;
    std::string getDayName() const;
    int julian() const;

    // static
    static int GetDateCount(); // returns objectCount

    // op overloaded
    Date& operator+=(int days);
    Date operator+(int days) const;
    Date operator-(int days) const;  
    int  operator-(const Date& other) const;
    Date& operator-=(int days);

    // inc/dec
    Date& operator++();    // pre
    Date  operator++(int); // post
    Date& operator--();    // pre
    Date  operator--(int); // post

    // binary asserts
    bool operator==(const Date& other) const;
    bool operator!=(const Date& other) const;
    bool operator>=(const Date& other) const;        
    bool operator<=(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator<(const Date& other) const;

    // finally holy
    friend Date operator+(int days, const Date& d);
    friend std::ostream& operator<<(std::ostream& out, const Date& d);
};

#endif
