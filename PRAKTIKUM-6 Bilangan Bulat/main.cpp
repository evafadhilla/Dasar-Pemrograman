/*
    PROGRAM BILANGAN BULAT
    {Program untuk Mengecek Bilangan Bulat Positif atau Negatif }
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
    cout << "Program untuk Mengecek Bilangan Bulat Positif atau Negatif " << endl;
    cout << "========================================================== " << endl;
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if (bilangan > 0){
        cout << bilangan << " Adalah bilangan positif " << endl;
    }
    else if (bilangan < 0){
        cout << bilangan << " Adalah bilangan negatif " << endl;
    }
    else
        cout << bilangan << " Nol " << endl;
    cout << "Finish " << endl;
    return 0;
}
