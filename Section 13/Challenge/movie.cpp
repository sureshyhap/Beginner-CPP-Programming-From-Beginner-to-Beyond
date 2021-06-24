#include "movie.h"

bool operator==(const Movie& m1, const Movie& m2) {
  return ((m1.name == m2.name) && (m1.rating == m2.rating));
}

std::ostream& operator<<(std::ostream& os, const Movie& m) {
  return (os << "Watched " << m.name << " rated " << m.rating << " " << m.times_watched << " times.");
}

Movie::Movie(const std::string& n, const std::string& r, int tw) : name(n), rating(r), times_watched(tw) {
  
}

Movie::Movie(const Movie& m) : Movie(m.name, m.rating, m.times_watched) {

}

Movie::~Movie() {

}

Movie& Movie::operator=(const Movie& m) {
  name = m.name;
  rating = m.rating;
  times_watched = m.times_watched;
  return *this;
}

Movie::Movie(Movie&& m) : Movie(m.name, m.rating, m.times_watched) {

}

void Movie::increment_times_watched() {
  ++times_watched;
}

void Movie::print() const {
  std::cout << *this << '\n';
}
