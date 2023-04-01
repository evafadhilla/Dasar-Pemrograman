/*
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107

    Program Matriks 2D Perkalian dengan inputan jumlah kolom dan baris serta nilai oleh user
*/

#include<iostream>

using namespace std;

int main() {
    //Kamus
    int baris, kolom, k, bm1, km1, bm2, km2, jumlah = 0;
    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> bm1;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> km1;
    int matriks1[bm1][km1];
    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> bm2;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> km2;
    int matriks2[bm2][km2];

    //Algoritma
    if(km1 != bm2){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
    }else {
        cout << "Masukkan elemen matriks pertama: \n";
            for(baris = 0; baris < bm1; baris++){
                for(kolom = 0; kolom < km1; kolom++){
                    cout<< "masukkan elemen baris ke-"<< baris+1 << " kolom ke- "<<kolom+1 << " : " ;
                    cin >> matriks1[baris][kolom];
                }
            }
    cout << "Masukkan elemen matriks kedua: \n";
        for(baris = 0; baris < bm2; baris++){
            for(kolom = 0; kolom < km2; kolom++){
                cout<<"masukkan element baris ke-"<<baris+1<<"kolom ke-"<<kolom+1<< " : ";
                cin >> matriks2[baris][kolom];
                }
            }
    int hasil[bm1][km2];
    for(baris = 0; baris < bm1; baris++){
      for(kolom = 0; kolom < km2; kolom++){
        for(k = 0; k < bm2; k++){
          jumlah = jumlah + matriks1[baris][k] * matriks2[k][kolom];
        }
        hasil[baris][kolom] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
        for(baris = 0; baris < bm1; baris++){
            for(kolom = 0; kolom < km2; kolom++){
                cout << hasil[baris][kolom] << "\t";
            }
      cout << endl;
    }
  }
  return 0;
}
