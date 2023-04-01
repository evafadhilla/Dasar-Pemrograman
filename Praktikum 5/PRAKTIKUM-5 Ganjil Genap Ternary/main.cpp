/*
    PROGRAM TERNARY GENAP GANJIL
    {Program Untuk Mengecek Apakah Bilangan Genap atau Ganjil}
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
    string hasil;

    //ALGORITMA
    cout << "Program Mengecek Apakah Bilangan Genap atau Ganjil" << endl;
    cout << "==================================================" << endl;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    hasil = (bilangan % 2 == 0)? "Bilangan Genap":"Bilangan Ganjil";
    cout << hasil;

    return 0;
}
