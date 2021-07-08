#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

Money operator+(const Money& first, const Money& second) {
  int d = first.dollars + second.dollars;
  int c = first.cents + second.cents;
  d += (c / 100);
  c %= 100;
  return Money(d, c);
}

//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


