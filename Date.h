#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

using namespace std;


class Date
{
    public:
        int* d;
        static int objectCount;

        //helpers funcs

        bool isValidDate(int m, int d,int y) const;
        bool isLeapYear(int y) const;
        int daysInMonth(int m, int y) const;
        void julianToGregorian(int jd);
        int gregorianToJulian() const;
        int dayOfWeek() const;
        void addDays(int days);


    private:
    Date(); //def
    Date(int M, int D,int Y);
    Date(int J); //fortran
    Date(const Date& other);//Copy constr

    ~Date();//need because dynamic

    //ops
    Date& operator=(const Date& other);

    //Getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    string getMonthName() const;
    string getDayName() const;
    int julian() const;

    //static
    static int coun()t; //its just a int method

    //opoverloaded
    Date& operator+=(int days);
    Date operator+(int days) const;
    Date operator-(int days) const;  
    int operator-(const Date& other) const;
    Date& operator-=(int days);

    // inc dec
    Date& operator++();//pre
    Date operator++(int);//post
    Date& operator--();
    Date operator--(int);

    //bin asserts
    bool operator==(const Date& other) const;
    bool operator!=(const Date& other) const;
    bool operator>=(const Date& other) const;        
    bool operator<=(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator<(const Date& other) const;

    //finally holy
    friend Date operator+(int days, const Date& d);
    friend ostream& operator<<(ostream& out, const Date& d);

};

#endif