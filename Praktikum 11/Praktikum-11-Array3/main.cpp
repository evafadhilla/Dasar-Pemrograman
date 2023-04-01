/*
    ARRAY KE 3 => ARRAY DINAMIS
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,7 Desember 2022
*/

#include <iostream>

using namespace std;

int main()
{

    //KAMUS
    // 1. DEKLARASI ARRAY
    int n;

    //ALGORIRTMA
    //2. INISIALISASI ARRAY DENGAN INPUTAN
    cout << " Masukkan Jumlah Input Array : ";
    cin >> n;
    int nilai [n];
    for (int i=0; i<n; i++){
        cout << " Inputan nilai ke-" << i+1 << " : ";
        cin >> nilai [i];
    }

    //3. OUTPUT ARRAY
    for (int i=0; i<n; i++){
        cout << " Nilai ke-" << i+1 << " : " << nilai [i] << endl;
    }

    return 0;
}

/*TUGAS PRAKTIKUM 11

    input jumlah array : [n] => 10
    input array = 1,2,3,4,5,6,7,8,9,10 => dinamis
    outputnya yang mendeteksi nilai array ganjil
    output jumlah nilai array ganjil
*/

