/*
    PROGRAM CONTOH NOTASI PERULANGAN DENGAN KONDISI DUA AKSI
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
    int i,n;
    i=0;

    //ALGORITMA
    cout << "Input Jumlah Pengulangan : ";
    cin >> n;
    while(true){
        i++; // sama dengan i=+1
        cout << "Mahasiswa" << endl;
        if (i>=n){
            cout << "Stop" << endl;
            break;
        }
    }
    return 0;
}
