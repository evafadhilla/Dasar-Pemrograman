/*
    PROGRAM MENU MAKANAN
    {Program menu makanan sederhana dengan Inputan berupa kode makanan}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int pilihan;

    //ALGORITMA
    cout << " ==== DAFTAR MENU MAKANAN ====" << endl;
    cout << " Masukkan List Makanan :  " << endl;
    cin >> pilihan;
    cout << " 1 = Nasi Goreng " << endl;
    cout << " 2 = Nasi Bakar " << endl;
    cout << " 3 = Nasi Merah " << endl;
    cout << " 4 = Nasi Kuning " << endl;
    cout << endl;

    switch (pilihan)
    {
    case 1 :
        cout << "Nasi Goreng" << endl;
        break;
    case 2 :
        cout << "Nasi Bakar" << endl;
        break;
    case 3 :
        cout << "Nasi Merah" << endl;
        break;
    case 4 :
        cout << "Nasi Kuning" << endl;
        break;
    }
    return 0;
}
