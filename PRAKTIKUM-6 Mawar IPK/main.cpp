/*
    PROGRAM MAWAR IPK
    {Program untuk menentukan lulus atau tidak mendapat beasiswa berdasarkan nilai IPK}
    Nama  : EVA FADHILLAH ULIA
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    float ipk;

    //ALGORITMA
    cout << "Program untuk menentukan lulus atau tidak mendapat beasiswa berdasarkan nilai IPK" << endl;
    cout << "=================================================================================" << endl;
    cout << "Masukkan IPK : ";
    cin >> ipk;
    if ((ipk >= 3.5) && (ipk <= 4)){
        cout << "Selamat Anda Dinyatakan Lulus ==> mendapatkan beasiswa" << endl;
    }else if ((ipk < 3.5) && (ipk >= 2.5)){
        cout << "Anda Sedang Dipertimbangkan" << endl;
    }else if ((ipk < 2.5) && (ipk >= 0)){
        cout << "Mohon Maaf Anda Dinyatakan Tidak Lulus" << endl;
    }else {
        cout << "Inputan Salah";
    }
    return 0;
}
