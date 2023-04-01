/*
    PROGRAM GENAP GANJIL
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

    //ALGORITMA
    cout << "Program Mengecek Apakah Bilangan Genap atau Ganjil" << endl;
    cout << "==================================================" << endl;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if (bilangan % 2 == 0){
        cout << bilangan << " Adalah Bilangan Genap";
    }else{
        cout << bilangan << " Adalah Bilangan Ganjil";
    }
     cout << endl << "Cek Selesai";

    return 0;
}
