/*
    PROGRAM SEGITIGA
    {Program Menghitung Luas Segitiga}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int alas, tinggi, Luas;

    //ALGORITMA
    cout << " Program Menghitung Luas Segitiga " << endl;
    cout << " ================================ " << endl;
    cout << " Masukkan alas : ";
    cin >> alas;
    cout << " Masukkan tinggi : ";
    cin >> tinggi;
    Luas = ( alas * tinggi ) / 2;
    cout << " Jadi Luas Segitiga : " << Luas << endl;

    return 0;
}
