#include "cs150time.h"
#include "clock.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Clock::Clock(bool useMilitary)
{
   military_ = useMilitary;
}

string Clock::location() const
{
   return "UTC (GMT)";
}

int Clock::hours() const
{
   Time now;
   int hours = now.hours();
   if (military_) return hours;
   if (hours == 0) return 12;
   else if (hours > 12) return hours - 12;
   else return hours;
}

int Clock::minutes() const
{
   Time now;
   return now.minutes();
}

bool Clock::isMilitary() const
{
   return military_;
}

ostream& operator<<(ostream& out, const Clock& c)
{
   out << setfill('0');
   out << c.location() << " " << c.hours()
      << ":" << setw(2) << c.minutes();
   return out;
}