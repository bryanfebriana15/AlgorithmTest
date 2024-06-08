#include <iostream>
#include <sstream>
#include <string>

std::string findlongestword(const std::string &stc)
{
  std::istringstream iss(stc);
  std::string word;
  std::string longestword;

  while (iss >> word)
  {
    if (word.length() > longestword.length())
    {
      longestword = word;
    }
  }
  return longestword;
}

int main()
{
  std::string stc;
  std::cout << "Masukkan Kalimat : ";
  std::getline(std::cin, stc);

  std::string longestword = findlongestword(stc);
  std::cout << "Kata Terpanjang : " << longestword << std::endl;

  return 0;
}