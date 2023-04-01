/*
    PROGRAM CONTOH NOTASI PENGULANGAN BERDASARKAN PENCACAH 2
    {i traversal [1...n]}
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
    int x, y, i;

    //ALGORITMA
    cout << "Input Awalan dan Akhiran [x y] : ";  //x sebagai nilai awal dan y sebagai nilai akhir
    cin >> x >> y;
    for(i=x; i<=y; i++){                          //pengulangan sebanyak selisih antara x dan y ditambah 1 atau nilai akhir ikut kehitung
        cout << "Mahasiswa UDINUS" << endl;
    }
    cout << endl << "Selesai";
    return 0;
}
