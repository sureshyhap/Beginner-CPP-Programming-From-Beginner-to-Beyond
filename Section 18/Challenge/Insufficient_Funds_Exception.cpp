#include "InsufficientFundsException.h"

const char* InsufficientFundsException::what() const noexcept override {
  return "You do not have enough funds to make that withdrawal\n";
}
