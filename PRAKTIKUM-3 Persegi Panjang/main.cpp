/*
    PROGRAM PERSEGI PANJANG
    {Program Menghitung Keliling dan Luas Persegi Panjang}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int p, l, Keliling, Luas;

    //ALGORITMA
    cout << " Program Menghitung Keliling dan Luas Persegi Panjang " << endl;
    cout << " ==================================================== " << endl;
    cout << " Masukkan Panjang : ";
    cin >> p;
    cout << " Masukkan Lebar : ";
    cin >> l;
    Keliling = 2 * (p+l);
    Luas = p * l;
    cout << " Hasil Keliling : " << Keliling << endl;
    cout << " Hasil Luas     : " << Luas << endl;
    return 0;
}
