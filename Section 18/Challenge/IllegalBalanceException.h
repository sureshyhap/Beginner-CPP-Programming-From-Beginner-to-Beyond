#ifndef _ILLEGALBALANCEEXCEPTION_H_
#define _ILLEGALBALANCEEXCEPTION_H_

#include <exception>

class IllegalBalanceException : std::exception {
public:
  IllegalBalanceException() noexcept = default;
  ~IllegalBalanceException() = default;
  virtual const char* what() const noexcept override;
};

#endif // _ILLEGAL_BALANCE_EXCEPTION_H_
