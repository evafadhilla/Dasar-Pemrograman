/*
        PROGRAM NAMA HARI
        {Program Array untuk menyimpan nama hari dalam satu minggu}
*/


#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    //1. Deklarasi Array
    string hari [7];

    //ALGORITMA
    //2. Inisialisasi Nilai (input array)
    for (int h=0; h<7; h++){
        cout << "Masukkan nama hari : ";
        cin >> hari [h];
    }
    cout << endl;

    //3. Tampilkan Array (output array)
    cout << "Berikut ini adalah nama hari dalam satu minggu : "<< endl;
    for (int m=0; m<7; m++){
        cout << "Hari " << hari [m] << endl;
    }
    return 0;
}
