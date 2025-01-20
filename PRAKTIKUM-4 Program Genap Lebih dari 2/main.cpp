/*
    PROGRAM GENAP LEBIH DARI 2
    {Program untuk mengecek apakah a bilangan genap lebih dari dua}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/


#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;

    //Algoritma
    cout << "Program Mengecek Apakah a Bilangan Genap Lebih dari 2" << endl;
    cout << "=====================================================" << endl;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if ((bilangan % 2 == 0) && (bilangan > 2))
    {
        cout << bilangan << endl;
    }
    cout << "Selesai";

    return 0;
}
