#include "IllegalBalanceException.h"

const char* IllegalBalanceException::what() const noexcept {
  return "Object cannot have a negative balance.\n";
}
