#include <iostream>
#include <iomanip>

using namespace std;

#include "travelclock.h"

int main()
{
   Clock clock12;
   Clock clock24(true);

   TravelClock clockCM(false, "Costa Mesa", -8);
   TravelClock clockRome(true, "Rome", 1);
   TravelClock clockTokyo(false, "Tokyo", 9);

   cout << "clock12->" << clock12 << endl;
   cout << "clock24->" << clock24 << endl;
   cout << "clockCM->" << clockCM << endl;
   cout << "clockRome->" << clockRome << endl;
   cout << "clockTokyo->" << clockTokyo << endl;

   return 0;
}

