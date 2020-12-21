#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "Enter a secret message: ";
  std::string message;
  std::getline(std::cin, message);
  std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::string key = "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";
  size_t length = message.length();
  std::string encrypted(length, ' '), decrypted(length, ' ');
  for (size_t i = 0; i < length; ++i) {
    size_t index = alphabet.find(message[i]);
    if (index != std::string::npos) {
      encrypted[i] = key[index];
    }
    else {
      encrypted[i] = message[i];
    }
  }
  std::cout << "Encrypted: " << encrypted << '\n';
  for (size_t i = 0; i < length; ++i) {
    size_t index = key.find(encrypted[i]);
    if (index != std::string::npos) {
      decrypted[i] = alphabet[index];
    }
    else {
      decrypted[i] = encrypted[i];
    }
  }
  std::cout << "Decrypted: " << decrypted << '\n';
  return 0;
}
