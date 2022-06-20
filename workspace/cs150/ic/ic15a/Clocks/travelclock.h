#ifndef TRAVELCLOCK_H
#define TRAVELCLOCK_H

#include <string>
#include "clock.h"

class TravelClock : public Clock
{
public:
   TravelClock(bool mil,
      const std::string& loc, int diff);
   std::string location() const override;
   int hours() const override;
private:
   std::string location_;
   int timeDifference_;
};

#endif
