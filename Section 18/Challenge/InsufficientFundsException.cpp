#include "InsufficientFundsException.h"

const char* InsufficientFundsException::what() const noexcept {
  return "You do not have enough funds to make that withdrawal\n";
}
