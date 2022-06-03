#ifndef CLOCK_H
#define CLOCK_H

#include <string>
#include <iostream>
using namespace std;

class Clock
{
public:
   /**
      Constructs a clock that can tell the local time.
      @param useMilitary true if the clock uses military format
   */
   Clock(bool useMilitary = false);

   /**
      Gets the location of this clock.
      @return the location
   */
   virtual std::string location() const;

   /**
      Gets the hours of this clock.
      @return the hours, in military or am/pm format
   */
   virtual int hours() const;

   /**
      Gets the minutes of this clock.
      @return the minutes
   */
   int minutes() const;

   /**
      Checks whether this clock uses military format.
      @return true if military format
   */
   bool isMilitary() const;

   /**
      Virtual Destructor (inline)
   */
   virtual ~Clock() {};
private:
   bool military_;
};

std::ostream& operator<<(std::ostream& out, const Clock& c);

#endif
