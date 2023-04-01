/*
    PROGRAM CHATBOT SEDERHANA BERDASARKAN NOTASI KONDISI PENGULANGAN
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu, 23 November 2022
*/


#include <iostream>

using namespace std;

int main()
{

    //KAMUS
    char pilih;

    //ALGORITMA

    //WHILE
    /*
    cout << "Apa mau belok kiri ? [y/t] :";
    cin >> pilih;
    while(pilih != 'y')
    {
        cout << "Apa apa mau belok kiri ? [y/t] :";
        cin >> pilih;
    }
    cout << "Selesai";
    */

    //DO WHILE
    cout << "Apa mau belok kiri ? [y/t] : ";
    cin >> pilih;
    do{
        cout << "Apa mau belok kiri ? [y/t] :";
        cin  >> pilih;

    }while (pilih != 'y');
        cout << "Selesai";

    return 0;
}
