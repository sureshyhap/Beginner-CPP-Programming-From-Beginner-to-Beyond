#ifndef _FILENNOTFOUNDERROR_
#define _FILENNOTFOUNDERROR_

#include <exception>

class FileNotFoundError : std::exception {
 public:
  FileNotFoundError() noexcept = default;
  ~FileNotFoundError() = default;
  virtual const char* what() const noexcept override;
};

#endif // _FILENNOTFOUNDERROR_
