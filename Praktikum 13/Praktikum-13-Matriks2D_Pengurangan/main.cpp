/*
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107

    Program Matriks 2D Pengurangan dengan inputan jumlah kolom dan baris serta nilai oleh user
*/

#include <iostream>

using namespace std;

int main() {
  int i, j, b, k;

  cout << "Masukkan Baris dan Kolom Matriks: \n";
  cin >> b;
  cin >> k;
  int matriks1[b][k];
  int matriks2[b][k];
  int hasil[b][k];

  cout << "Masukkan Nilai Matriks Pertama: \n";
  for(i = 0; i < b; i++){
    for(j = 0; j < k; j++){
      cin >> matriks1[i][j];
    }
  }

  cout << "Masukkan Nilai Matriks Kedua: \n";
  for(i = 0; i < b; i++){
    for(j = 0; j < k; j++){
      cin >> matriks2[i][j];
    }
  }

  cout << "Hasil Dari Pengurangan Matriks: \n";
  for(i = 0; i < b; i++){
    for(j = 0; j < k; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}
