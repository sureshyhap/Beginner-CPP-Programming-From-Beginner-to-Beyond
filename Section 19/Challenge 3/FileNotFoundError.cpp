#include "FileNotFoundError.h"

const char* FileNotFoundError::what() const noexcept {
  return "File Not Found";
}
