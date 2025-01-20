/*
    PROGRAM KONVERSI SUHU
    {Program Mengkonversi Suhu Celcius ke Reamur,Fahrenheit dan Kelvin}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    float C, R, F, K;

    //ALGORITMA
    cout << " Program Mengkonversi Suhu dari Celcilus ke Reamur, Fahrenheit dan Kelvin " << endl;
    cout << " ======================================================================== " << endl;
    cout << " Masukkan Suhu Celcius  : ";
    cin >> C;

    //RUMUS KONVERSI SUHU
    R = C * 4 / 5;
    F = (C * 9 / 5) + 32;
    K = C + 273;

    cout << " Hasil Koversi " << endl;
    cout << " Derajat Reamur (R)     : " << R << endl;
    cout << " Derajat Fahrenheit (F) : " << F << endl;
    cout << " Derajat Kelvin (K)     : " << K << endl;

	return 0;
}

