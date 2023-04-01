/*
    PROGRAM UANG SAKU
    {program untuk mengecek  mahasiswa mampu atau kurang mampu}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107

*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char input1;
    int input2;

    //ALGORITMA
    cout << " Apakah anda mahasiswa UDINUS ('y' / 't' / 'Y' / 'T') : " ;
    cin >> input1;
    if ((input1 == 'y') || (input1 == 'Y')){
        cout << " Masukkan Uang Saku: ";
        cin >> input2;
        if (input2 > 1000000) {
            cout << " Mahasiswa Sultan ";
        }else{
            cout << " Bukan Mahasiswa Sultan";
        }
    }else if (( input1 == 't') || (input1 == 'T')){
            cout << " Bukan Mahasiswa Udinus";
    }else
        cout << " Inputan Salah" << endl;

    return 0;
}

