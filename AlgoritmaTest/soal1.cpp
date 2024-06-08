#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

std::string
reversealphabet(const std::string &str)
{
  std::istringstream iss(str);
  std::string word;
  std::string result;

  while (iss >> word)
  {
    if (word.length() > 1)
    {
      std::reverse(word.begin(), word.end() - 1);
    }
    result += word + " ";
  }
  if (!result.empty())
  {
    result.pop_back();
  }

  return result;
}

int main()
{
  std::string input;
  std::cout << "Masukkan Kata : ";
  std::getline(std::cin, input);

  std::string output = reversealphabet(input);
  std::cout << "Hasil Perubahan : " << output << std::endl;

  return 0;
}