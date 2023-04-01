/*
    PROGRAM MAWAR ABSOLUTE
    {Program untuk mengecek bilangan absolut
    (negatif atau positif) => positif dan kelipatan 5}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int bilangan, hasil1;
    string hasil2;

    //ALGORITMA
    cout << " Program Mawar Absolute " << endl;
    cout << " ====================== " << endl;

    cout << " Masukkan Bilangan : ";
    cin >> bilangan;
    hasil1 = (bilangan<0)? bilangan*-1:bilangan;
    hasil2 = (bilangan % 5 == 0)? "Bilangan Kelipatan 5" : "Bukan Bilangan Kelipatan 5";
    cout << hasil1 << " Adalah " << hasil2;
    cout << endl << "Cek Selesai";
    return 0;
}
