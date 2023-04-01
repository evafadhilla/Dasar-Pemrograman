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

    //for yang naik dua kali
    cout << "Batas range bilangan genap : ";
    cin >> n;
    /*
    for (i=0;i<=n;i+=2){
            //i++                       //bedanya break dan continue beserta contohnya
            if(i==0)
            {
                continue;
            }
        cout << i << endl;
    }
    */

    //cara menampilkan bilangan genap dengan cara lain
    for (i=1; i<=n ; i++){
        if (i%2 == 0){
            cout << i << endl;
        }
    }
    cout << endl << "Selesai";
    return 0;
}
