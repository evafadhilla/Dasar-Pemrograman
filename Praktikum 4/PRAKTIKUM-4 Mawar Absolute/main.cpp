/*
    PROGRAM MAWAR ABSOLUTE
    {Program Untuk Mengoutputkan Bilangan Bulat Positif Jika User Menginputkan Negatif}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.2022.14283
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int x;

    //ALGORITMA
    cout << "Program Mawar Absolute" << endl;
    cout << "======================" << endl;
    cout << "Masukkan Bilangan : ";
    cin >> x;
    if ( x < 0 )
    {
        x = x * -1;

    }
    cout << x;

    return 0;
}
