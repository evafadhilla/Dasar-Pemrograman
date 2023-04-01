/*
    PROGRAM PENCACAH 3
    {Program Bilangan Genap/Ganjil Positif}
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
    int i, n;

    //ALGORITMA

    cout << "Batas range bilangan ganjil : ";
    cin >> n;
    for (i=1;i<=n;i+=2){
            //i++
        cout << i << endl;
    }
    cout << endl << "Selesai";
    return 0;
}
