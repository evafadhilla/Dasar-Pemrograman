/*
    PROGRAM BILANGAN GANJIL
    {Program Untuk Mwncari Bilangan Ganjil Antara 15 sampai 95}
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
    cout << "Program Menentukan Bilangan Ganjil Antara 15-95" << endl;
    cout << "===============================================" << endl;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if((bilangan % 2 == 1) && (bilangan > 15) && (bilangan <95))
    {
        cout << bilangan << " Adalah Bilangan Ganjil Antara 15-95 " << endl;
    }
    else
    {
        cout << "Cek Selesai" << endl;
    }
    return 0;
}
