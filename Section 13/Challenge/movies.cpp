#include "movies.h"
#include <algorithm>

void Movies::add_movie(const std::string& name, const std::string& rating, int times_watched) {
  Movie m(name, rating, times_watched);
  if (std::find(collection.begin(), collection.end(), m) == collection.end()) {
    collection.push_back(m);
  }
  else {
    std::cout << "Movie already in collection.\n";
    return;
  }
}

void Movies::increment_watched(const std::string& name) {
  for (std::vector<Movie>::iterator it = collection.begin();
       it != collection.end(); ++it) {
    if (it->get_name() == name) {
      it->increment_times_watched();
      return;
    }
  }
  std::cout << "Movie not in collection.\n";
}

void Movies::print() const {
  int size = collection.size();
  for (int i = 0; i < size; ++i) {
    collection[i].print();
  }
}
