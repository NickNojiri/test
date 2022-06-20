#include <ctime>
#include <stdexcept>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

#include "cs150time.h"

/**
   Computes the correct remainder for negative dividend
   @param a - an integer
   @param n - an integer > 0
   @return the mathematically correct remainder r such that
   a - r is divisible by n and 0 <= r and r < n
*/
int remainder(int a, int n)
{
   if (a >= 0) return a % n;
   else return n - 1 - (-a - 1) % n;
}

Time::Time(int hour, int min, int sec)
{
   if (hour < 0 || hour > 23 || min < 0
      || min > 59 || sec < 0 || sec > 59)
      throw invalid_argument("Time("
      + to_string(hour) + ", "
      + to_string(min) + ", "
      + to_string(sec) + ") is invalid.");

   seconds_ = 60L * 60 * hour + 60 * min + sec;
}

Time::Time()
{
   time_t now = time(0);
   struct tm& t = *gmtime(&now);
   seconds_ = 60L * 60 * t.tm_hour + 60 * t.tm_min + t.tm_sec;
}

int Time::hours() const
{
   return seconds_ / (60 * 60);
}

int Time::minutes() const
{
   return (seconds_ / 60) % 60;
}

int Time::seconds() const
{
   return seconds_ % 60;
}

int Time::operator-(const Time& t) const
{
   return seconds_ - t.seconds_;
}

Time& Time::operator+=(int s)
{
   const int SECONDS_PER_DAY = 60 * 60 * 24;
   seconds_ = remainder(seconds_ + s, SECONDS_PER_DAY);
   return *this;
}

ostream& operator<<(ostream& out, const Time& t)
{
   out << setfill('0');
   out << setw(2) << t.hours() << ":"
      << setw(2) << t.minutes() << ":"
      << setw(2) << t.seconds();
   return out;
}