#include <iostream>
#include "movies.h"

int main(int argc, char* argv[]) {
  Movies ms;
  ms.add_movie("The Shawshank Redemption", "R");
  ms.add_movie("The Matrix", "R");
  ms.add_movie("War Horse", "PG-13");
  ms.add_movie("The Pursuit of Happyness", "PG-13");
  ms.add_movie("The Matrix", "R");
  ms.increment_watched("The Shawshank Redemption");
  ms.increment_watched("John Wick");
  ms.print();
  return 0;
}
