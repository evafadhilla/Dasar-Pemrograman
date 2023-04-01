/*
    Program Cetak Bilangan Positif
    {Tulis semua bilangan positif lebih dari 0 dari 1, 2, 3, ..., sampai N.
     Perhatikan bahwa N merupakan bilangan bulat positif yang di inputkan oleh user.}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,9 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n, i;

    //ALGORITMA
    i = 1;
    cin >> n;
    for (;n>0;n--)
    {
        cout << i << endl;
        i=i+1;
    }

    return 0;
}
