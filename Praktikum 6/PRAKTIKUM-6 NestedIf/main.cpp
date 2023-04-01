/*
    PROGRAM POSITIF GENAP GANJIL
    {Progam untuk Mengecek Genap Ganjil}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
  //KAMUS
  int bilangan;

  //ALGORITMA
  cout << "Masukkan bilangan : ";
  cin >> bilangan;
  if (bilangan > 0){
        if (bilangan % 2 == 0){
            if ((bilangan >=2) && (bilangan <=10)){
                cout << bilangan << " Adalah bilangan positif genap antara 2-10";
            }else{
                cout << bilangan << " Adalah bilangan positif genap bukan antara 2-10";
            }

        }else{
            cout << bilangan << " Adalah bilangan positif ganjil";
        }
    }else{
    cout << bilangan << " Adalah bukan bilangan positif (negatif)";
    }
    return 0;
}
