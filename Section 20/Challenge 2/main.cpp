// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
  std::cout << "Playing:\n" << song << '\n';
  //    std::cout << "You implement this function"<< std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
  for (std::list<Song>::const_iterator cit = playlist.cbegin();
       cit != playlist.cend(); ++cit) {
    std::cout << *cit << '\n';
  }
  std::cout << "Current song: \n" << current_song << '\n';
  
  //    std::cout << "You implement this function" << std::endl;
}

void take_action(char selection, std::list<Song>& playlist, std::list<Song>::iterator& it) {
  switch (toupper(selection)) {
  case 'F':
    std::cout << "Playing first song\n";
    play_current_song(*playlist.begin());
    break;
  case 'N':
    std::cout << "Playing next song\n";
    if (++it == playlist.end()) {
      it = playlist.begin();
      std::cout << "Wrapping to the start of playlist\n";
    }
    play_current_song(*it);
    break;
  case 'P':
    if (it == playlist.begin()) {
      it = playlist.end();
      std::cout << "Wrapping to the end of playlist\n";
    }
    play_current_song(*--it);
    break;
  case 'A': {
    std::cout << "Adding and playing a new song\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
    std::cout << "Enter song name: ";
    std::string song_name;
    std::getline(std::cin, song_name);
    std::cout << "Enter song artist: ";    
    std::string song_artist;
    std::getline(std::cin, song_artist);
    std::cout << "Enter your rating (1-5): ";
    int song_rating = {};
    std::cin >> song_rating;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');    
    playlist.emplace(it, song_name, song_artist, song_rating);
    --it;
    play_current_song(*it);
    break;
  }
  case 'L':
    display_playlist(playlist, *it);
    break;
  }
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    
    //    std::cout << "To be implemented" << std::endl;
    // Your program logic goes here
    display_playlist(playlist, *current_song);
    display_menu();
    char selection = {};
    std::cin >> selection;
    while (toupper(selection) != 'Q') {
      take_action(selection, playlist, current_song);
      display_menu();
      std::cin >> selection;
    }

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}
