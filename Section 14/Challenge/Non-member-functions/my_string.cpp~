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

My_String My_String::operator-() const {
  int length = strlen(str);
  char* buf = new char[length + 1];
  for (int i = 0; i < length; ++i) {
    buf[i] = tolower(str[i]);
  }
  buf[length] = '\0';
  My_String temp(buf);
  delete [] buf;
  return temp;
}

bool My_String::operator==(const My_String& ms) const {
  return strcmp(str, ms.str) == 0;
}

bool My_String::operator!=(const My_String& ms) const {
  return strcmp(str, ms.str) != 0;
}

bool My_String::operator<(const My_String& ms) const {
  if (strcmp(str, ms.str) < 0) {
    return true;
  }
  else {
    return false;
  }
}

bool My_String::operator>(const My_String& ms) const {
  if (strcmp(str, ms.str) > 0) {
    return true;
  }
  else {
    return false;
  }  
}

My_String My_String::operator+(const My_String& ms) const {
  char* buf = new char[strlen(str) + strlen(ms.str) + 1];
  strcpy(buf, str);
  strcat(buf, ms.str);
  My_String temp(buf);
  delete [] buf;
  return temp;
}

My_String& My_String::operator+=(const My_String& ms) {
  *this = (*this + ms);
  return *this;
}

My_String My_String::operator*(int n) {
  char* buf = new char[strlen(str) * n + 1];
  strcpy(buf, str);
  for (int i = 1; i < n; ++i) {
    strcat(buf, str);
  }
  My_String temp(buf);
  delete [] buf;
  return temp;
}

My_String& My_String::operator*=(int n) {
  *this = (*this * n);
  return *this;
}

My_String& My_String::operator++() {
  int length = strlen(str);
  for (int i = 0; i < length; ++i) {
    str[i] = toupper(str[i]);
  }
  return *this;
}

My_String My_String::operator++(int) {
  My_String temp(*this);
  operator++();
  return temp;
}

My_String& My_String::operator--() {
  int length = strlen(str);
  for (int i = 0; i < length; ++i) {
    str[i] = tolower(str[i]);
  }
  return *this;
}

My_String My_String::operator--(int) {
  My_String temp(*this);
  operator--();
  return temp;  
}
