#include <iostream>

bool is_palindrome(std::string text)
{
  std::string reversed_text = "";

  for (int i = text.size() - 1; i >= 0; i--)
  {
    reversed_text += text[i];
  }
 
  return text == reversed_text;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}