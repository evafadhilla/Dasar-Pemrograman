/*
    PROGRAM TAHUN KABISAT
    {Program Menentukan Tahun Kabisat}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{

    //KAMUS
    int tahun;

    //ALGORITMA

    cout << " Program Menentukan Tahun Kabisat " << endl;
    cout << " ================================ " << endl;
    cout << " Masukkan Tahun : ";
    cin >> tahun;
    if (tahun % 400 == 0){
        cout <<tahun<< " Adalah Tahun Kabisat" ;
    }else if ((tahun % 400 !=0) && (tahun % 100!=0)){
        if (tahun % 4 ==  0){
            cout << tahun << " Adalah Tahun Kabisat";
        }
    }else{
        cout << tahun << " Adalah Bukan Tahun Kabisat";
    }

    return 0;

}
