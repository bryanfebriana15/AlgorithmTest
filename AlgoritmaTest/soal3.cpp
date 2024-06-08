#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  // Deklarasi array INPUT dan Query
  vector<string> INPUT = {"xc", "dz", "bbb", "dz"};
  vector<string> QUERY = {"bbb", "ac", "dz"};

  // Loop untuk setiap kata di Query
  for (const auto &queryword : QUERY)
  {
    int count = 0;

    // Loop untuk setiap kata di INPUT
    for (const auto &inputword : INPUT)
    {
      if (queryword == inputword)
      {
        count++;
      }
    }

    // Menampilkan Hasil
    cout << "Kata \"" << queryword << "\" muncul sebanyak " << count << "\" kali." << endl;
  }
  return 0;
}