// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
  std::string to_process;
  std::copy_if(s.begin(), s.end(), std::back_inserter(to_process), [](char c) {return isalpha(c);});
  std::transform(to_process.begin(), to_process.end(), to_process.begin(), ::toupper);
  std::stack<char> st;
  std::queue<char> qu;
  for (char c : to_process) {
    st.push(c);
    qu.push(c);
  }
  while (!st.empty()) {
    if (st.top() != qu.front()) {
      return false;
    }
    st.pop();
    qu.pop();
  }
  return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
