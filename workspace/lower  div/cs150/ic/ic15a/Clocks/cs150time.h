#ifndef CS150TIME_H
#define CS150TIME_H
#include <iostream>

/**
   A class that describes a time of day
   (between 00:00:00 and 23:59:59)
   Originally developed by Cay Horstmann as ccc_time.
   Modified by Stephen Gilbert for CS 150
*/
class Time
{
public:
   /**
      Constructs a time of day.
      @param hour the hours
      @param min the minutes
      @param sec the seconds
   */
   Time(int hour, int min, int sec);
   /**
      Constructs a Time object that is set to
      the time at which the constructor executes.
   */
   Time();

   /**
      Gets the hours of this time.
      @return the hours
   */
   int hours() const;
   /**
      Gets the minutes of this time.
      @return the minutes
   */
   int minutes() const;
   /**
      Gets the seconds of this time.
      @return the seconds
   */
   int seconds() const;

   /**
      Computes the seconds between this time and another.
      @param t the other time
      @return the number of seconds between this time and t
   */
   int operator-(const Time& t) const;

   /**
      Adds a number of seconds to this time.
      @param s the number of seconds to add
   */
   Time& operator+=(int s);

private:
   int seconds_;
};

std::ostream& operator<<(std::ostream& out, const Time& t);

#endif
