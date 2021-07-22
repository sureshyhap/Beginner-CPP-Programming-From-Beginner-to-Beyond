#ifndef _INSUFFICIENTFUNDSEXCEPTION_H_
#define _INSUFFICIENTFUNDSEXCEPTION_H_

#include <exception>

class InsufficientFundsException : std::exception {
public:
  InsufficientFundsException() noexcept = default;
  ~InsufficientFundsException() = default;
  virtual const char* what() const noexcept override;
};

#endif // _INSUFFICIENT_FUNDS_EXCEPTION_H_
