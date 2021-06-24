#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>

class Movie {
  friend bool operator==(const Movie& m1, const Movie& m2);
  friend std::ostream& operator<<(std::ostream& os, const Movie& m);
 public:
  Movie(const std::string& name="", const std::string& rating="", int times_watched = 0);
  Movie(const Movie& m);
  ~Movie();
  Movie& operator=(const Movie& m);
  Movie(Movie&& m);
  std::string get_name() const {
    return name;
  }
  std::string get_rating() const {
    return rating;
  }
  int get_times_watched() const {
    return times_watched;
  }
  void increment_times_watched();
  void print() const;
 private:
  std::string name;
  std::string rating;
  int times_watched;
};

#endif // MOVIE_H
