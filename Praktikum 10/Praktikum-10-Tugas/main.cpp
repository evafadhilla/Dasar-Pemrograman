/*
    TUGAS
    PROGRAM NESTED LOOP SEGITIGA BINTANG
    {Program Menampilkan Segitiga siku-siku kebalik dengan inputan jumlah dari user}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,30 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int tinggi, baris, kolom;

    //ALGORITMA
    cout << "Input tinggi segitiga : ";
    cin >> tinggi;
    for(baris=0; baris<=tinggi; baris++){
        for(kolom=1; kolom<=tinggi-baris; kolom++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
