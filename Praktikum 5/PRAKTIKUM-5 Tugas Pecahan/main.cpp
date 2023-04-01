/*
    PROGRAM CONVERT PROGRAM C Ke C++
    {Program Mengconvert dari Bahasa Pemrograman C ke C++ - Pembilang dan Penyebut}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //KAMUS
    float a, b, Hasil;

    //ALGORITMA
    cout << " Program Convert C ke C++ (Pembilang dan Penyebut)" << endl;
    cout << " ================================================ " << endl;
    cout << " Input Pembilang :  ";
    cin >> a;
    cout << " Input Penyebut : ";
    cin >> b;
    if (b == 0)
    {
        cout << " Penyebut tidak boleh 0! " << endl;
    }
    else
    {
        Hasil = a/b;
        cout << " Hasil  " << a << " / " << b << " = " << Hasil << endl;
    }

    return 0;
}
