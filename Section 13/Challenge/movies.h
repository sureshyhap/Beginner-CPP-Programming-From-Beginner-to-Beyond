#ifndef MOVIES_H
#define MOVIES_H

#include "movie.h"
#include <vector>

class Movies {
 public:
  void add_movie(const std::string& name, const std::string& rating, int times_watched = 1);
  void increment_watched(const std::string& name);
  void print() const;
 private:
  std::vector<Movie> collection;
};

#endif // MOVIES_H
