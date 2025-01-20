/*
    PROGRAM TABUNG
    {Program Menghitung Keliling Alas, Luas dan Volume Tabung Tanpa Inputan Pemberian Nilai Langsung pada Variabel}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int r, t;
    float phi, KelilingAlas, Luas, Volume;
    phi = float (22)/7;

    //ALGORITMA
    r = 7;
    t = 24;

    KelilingAlas = 2 * phi * r;
    Luas = 2 * phi * r * r;
    Volume = phi * r * r * t;
    cout << " PROGRAM MENGHITUNG KELILING ALAS, LUAS DAN VOLUME TABUNG " << endl;
    cout << " ======================================================== " << endl;
    cout << " Jari-Jari (r) : " << r << endl;
    cout << " Tinggi    (t) : " << t << endl;
    cout << " phi           : " << phi << endl;
    cout << endl;
    cout << " Keliling Alas : " << KelilingAlas << endl;
    cout << " Luas          : " << Luas << endl;
    cout << " Volume        : " << Volume << endl;

    return 0;
}
