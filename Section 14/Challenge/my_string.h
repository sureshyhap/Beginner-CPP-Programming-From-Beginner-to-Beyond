#ifndef _MY_STRING_
#define _MY_STRING_

#include <iostream>

class My_String {
  friend std::ostream& operator<<(std::ostream& os, const My_String& ms);
  friend std::istream& operator>>(std::istream& is, My_String& ms);
 public:
  My_String();
  My_String(const My_String& ms);
  My_String(My_String&& ms);
  My_String(const char* c);
  ~My_String();
  My_String& operator=(const My_String& ms);
  My_String& operator=(My_String&& ms);
  const char* get_str() const;
  My_String operator-() const;
  bool operator==(const My_String& ms) const;
  bool operator!=(const My_String& ms) const;
  bool operator<(const My_String& ms) const;
  bool operator>(const My_String& ms) const;
  My_String operator+(const My_String& ms) const;
  My_String& operator+=(const My_String& ms);
  My_String operator*(int n);
  My_String& operator*=(int n);
  My_String& operator++();
  My_String operator++(int);
  My_String& operator--();
  My_String operator--(int);
 private:
  char* str;
};

#endif // _MY_STRING_
