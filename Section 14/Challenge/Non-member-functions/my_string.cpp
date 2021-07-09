#include "my_string.h"
#include <cctype>
#include <cstring>

std::ostream& operator<<(std::ostream& os, const My_String& ms) {
  return os << ms.str;
}

std::istream& operator>>(std::istream& is, My_String& ms) {
  char* buf = new char[1000];
  is >> buf;
  delete [] ms.str;
  strcpy(ms.str, buf);
  delete [] buf;
  return is;
}

My_String::My_String() : str(nullptr) {
  
}

My_String::My_String(const My_String& ms) : str(new char[strlen(ms.str) + 1]) {
  strcpy(str, ms.str);
}

My_String::My_String(My_String&& ms) : str(ms.str) {
  ms.str = nullptr;
}

My_String::My_String(const char* c) : str(new char[strlen(c) + 1]) {
  strcpy(str, c);
}

My_String::~My_String() {
  delete [] str;
}

My_String& My_String::operator=(const My_String& ms) {
  if (this == &ms) {
    return *this;
  }
  delete [] str;
  str = new char[strlen(ms.str) + 1];
  strcpy(str, ms.str);
  return *this;
}

My_String& My_String::operator=(My_String&& ms) {
  if (this == &ms) {
    return *this;
  }  
  delete [] str;
  str = ms.str;
  ms.str = nullptr;
  return *this;
}

const char* My_String::get_str() const {
  return str;
}

My_String operator-(const My_String& ms) {
  int length = strlen(ms.str);
  char* buf = new char[length + 1];
  for (int i = 0; i < length; ++i) {
    buf[i] = tolower(ms.str[i]);
  }
  buf[length] = '\0';
  My_String temp(buf);
  delete [] buf;
  return temp;
}

bool operator==(const My_String& ms1, const My_String& ms2) {
  return strcmp(ms1.str, ms2.str) == 0;
}

bool operator!=(const My_String& ms1, const My_String& ms2) {
  return strcmp(ms1.str, ms2.str) != 0;
}

bool operator<(const My_String& ms1, const My_String& ms2) {
  if (strcmp(ms1.str, ms2.str) < 0) {
    return true;
  }
  else {
    return false;
  }
}

bool operator>(const My_String& ms1, const My_String& ms2) {
  if (strcmp(ms1.str, ms2.str) > 0) {
    return true;
  }
  else {
    return false;
  }  
}

My_String operator+(const My_String& ms1, const My_String& ms2) {
  char* buf = new char[strlen(ms1.str) + strlen(ms2.str) + 1];
  strcpy(buf, ms1.str);
  strcat(buf, ms2.str);
  My_String temp(buf);
  delete [] buf;
  return temp;
}

My_String& operator+=(My_String& ms1, const My_String& ms2) {
  ms1 = (ms1 + ms2);
  return ms1;
}

My_String operator*(const My_String& ms, int n) {
  char* buf = new char[strlen(ms.str) * n + 1];
  strcpy(buf, ms.str);
  for (int i = 1; i < n; ++i) {
    strcat(buf, ms.str);
  }
  My_String temp(buf);
  delete [] buf;
  return temp;
}

My_String& operator*=(My_String& ms, int n) {
  ms = (ms * n);
  return ms;
}

My_String& operator++(My_String& ms) {
  int length = strlen(ms.str);
  for (int i = 0; i < length; ++i) {
    ms.str[i] = toupper(ms.str[i]);
  }
  return ms;
}

My_String operator++(My_String& ms, int) {
  My_String temp(ms);
  operator++(ms);
  return temp;
}

My_String& operator--(My_String& ms) {
  int length = strlen(ms.str);
  for (int i = 0; i < length; ++i) {
    ms.str[i] = tolower(ms.str[i]);
  }
  return ms;
}

My_String operator--(My_String& ms, int) {
  My_String temp(ms);
  operator--(ms);
  return temp;
}
