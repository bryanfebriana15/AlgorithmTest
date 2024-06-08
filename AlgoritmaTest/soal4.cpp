#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cout << "Masukkan ukuran matriks (N) : ";
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));

  cout << " Masukkan Elemen-elemen matriks : " << endl;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> matrix[i][j];
    }
  }

  int diagonalPertama = 0, diagonalKedua = 0;
  for (int i = 0; i < n; ++i)
  {
    diagonalPertama += matrix[i][i];
    diagonalKedua += matrix[i][n - 1 - i];
  }

  // Hasil
  int hasil = diagonalPertama - diagonalKedua;

  cout << "Maka Hasilnya adalah : " << hasil << endl;

  return 0;
}