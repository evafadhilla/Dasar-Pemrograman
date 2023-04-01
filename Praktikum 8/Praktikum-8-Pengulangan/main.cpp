/*
    Program Pengulangan C++
    {Program Pengulangan C++ Menggunakan Kode Blok For,While dan Do While}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,9 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    /*
    FOR (sintak for adalah for ( <init>; <kondisi>; <increment>){
        //aksi;
    }
    increment adalah pertambahan / naik
    decrement adalah pengurangan / turun
    */

    /*
    for ( int a = 10; a < 20 ; a = a + 1){
        cout << " value of a : " << a << endl;
    */


    /*
    WHILE ( cek kondisi terlebih dahulu,jika true jalankan aksi)
    //KAMUS
    int a = 10;

    //ALGORITMA
    while ( a < 20 ){
        cout << " value of a : " << a << endl;
        a++;
    }
    */


    //DO WHILE ( jalankan aksi terlebih dahulu , lalu cek kondisi jika true looping akan lanjut )
    //KAMUS
    int a = 10;

    //ALGORITMA
    do {
       cout << " value of a : " << a << endl;
        a = a+1;
    } while ( a < 20);

    return 0;
}
