/*
    Program MaxAB
    {Program untuk mencari nilai maksimal antara 2 nilai : A dan B}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int a, b;

    //ALGORITMA
    cout << " Masukkan Nilai A : ";
    cin >> a;
    cout << " Masukkan Nilai B : ";
    cin >> b;
    if (a>=b){
        cout << " Nilai Paling Besar : " << a;
    }else{
        cout << " Nilai Paling Besar : " << b;
    }
    cout << endl << " Cek Selesai";
    return 0;
}
