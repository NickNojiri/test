#include <string>
using namespace std;

#include "travelclock.h"

   TravelClock::TravelClock(bool mil,
            const string& loc, int diff)
      : Clock(mil), location_(loc), timeDifference_(diff)
   {
      while (timeDifference_ < 0)
         timeDifference_ += 24;
   }


   string TravelClock::location() const
   {
      return location_;
   }

   int TravelClock::hours() const
   {
      int h = Clock::hours();
      if (isMilitary())
         return (h + timeDifference_) % 24;
      else
      {
         h = (h + timeDifference_) % 12;
         if (h == 0) return 12;
         else return h;
      }
   }
