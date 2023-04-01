/*
    PROGRAM MaxAB
    {Program Untuk Mengecek Bilangan dengan Nilai Maksimal Dua Bilangan Bulat a dan b}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int a,b;

    //ALGORITMA
    cout << "Program Untuk Mengecek Bilangan dengan Nilai Maksimal Dua Bilangan Bulat a dan b" << endl;
    cout << "================================================================================" << endl;
    cout << "Masukkan Bilangan a : ";
    cin >> a;
    cout << "Masukkan Bilangan b : ";
    cin >> b;
    if (a>=b)
    {
        cout << a ;
    }
    else
    {
        cout << b;
    }
    return 0;
}
