/*
    PROGRAM MAWAR ABSOLUTE
    {Programuntuk Penyelesaian Kasus Kelipatan 5 si Mawar}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int bilangan;

    //ALGORITMA
    cout << "Program Mawar Absolute" << endl;
    cout << "======================" << endl;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if (bilangan<0) {
        bilangan *= -1; // bilangan = bilangan*-1;
    }
    if (bilangan % 5 == 0){
        cout << bilangan << " Adalah Bilangan Kelipatan 5";
    }else{
        cout << bilangan << " Adalah Bukan Bilangan Kelipatan 5";
    }
    cout << endl << "Cek Selesai";

    return 0;
}
