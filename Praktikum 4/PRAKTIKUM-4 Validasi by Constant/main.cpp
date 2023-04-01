/*
    PROGRAM VALIDASI By CONSTANT
    {Program Untuk Mengecek Suatu Bilangan Bulat Apakah Lebih dari Suatu Nilai Variabel Konstanta}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283o
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int a;
    const int X = 10;

    //ALGORITMA
    cout << "Program Untuk Mengecek Suatu Bilangan Bulat Apakah Lebih dari Suatu Nilai Variabel Konstanta" << endl;
    cout << "============================================================================================" << endl;
    cout << "Masukkan Bilangan : " << endl;
    cin >> a;
    if (a > X)
    {
        cout << a << endl;
    }
        cout << "Cek Selesai";
    return 0;
}
