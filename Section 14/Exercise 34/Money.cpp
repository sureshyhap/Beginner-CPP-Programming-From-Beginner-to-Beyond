#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

bool Money::operator==(const Money& other) const {
  if (dollars == other.dollars and cents == other.cents) {
    return true;
  }
  else {
    return false;
  }
}

bool Money::operator!=(const Money& other) const {
  if (dollars != other.dollars or cents != other.cents) {
    return true;
  }
  else {
    return false;
  }
}

//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


