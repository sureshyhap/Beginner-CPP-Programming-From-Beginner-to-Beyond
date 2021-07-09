#ifndef _MY_STRING_
#define _MY_STRING_

#include <iostream>

class My_String {
  friend std::ostream& operator<<(std::ostream& os, const My_String& ms);
  friend std::istream& operator>>(std::istream& is, My_String& ms);
  friend My_String operator-(const My_String& ms);
  friend bool operator==(const My_String& ms1, const My_String& ms2);
  friend bool operator!=(const My_String& ms1, const My_String& ms2);
  friend bool operator<(const My_String& ms1, const My_String& ms2);
  friend bool operator>(const My_String& ms1, const My_String& ms2);
  friend My_String operator+(const My_String& ms1, const My_String& ms2);
  friend My_String& operator+=(My_String& ms1, const My_String& ms2);
  friend My_String operator*(const My_String& ms, int n);
  friend My_String& operator*=(My_String& ms, int n);
  friend My_String& operator++(My_String& ms);
  friend My_String operator++(My_String& ms, int);
  friend My_String& operator--(My_String& ms);
  friend My_String operator--(My_String& ms, int);
 public:
  My_String();
  My_String(const My_String& ms);
  My_String(My_String&& ms);
  My_String(const char* c);
  ~My_String();
  My_String& operator=(const My_String& ms);
  My_String& operator=(My_String&& ms);
  const char* get_str() const;
 private:
  char* str;
};

#endif // _MY_STRING_
