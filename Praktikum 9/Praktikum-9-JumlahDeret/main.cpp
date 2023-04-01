/*
    PROGRAM PENCACAH 4
    {Program Menghitung Jumlah Deret Bilangan}
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
    int i, n, bil, sum;

    //ALGORITMA
    cout << "Berapa kali input bilangan : ";
    cin >> n;
    sum = 0;   //kalau ga dikasi 0 takutnya ada sisa variabel lain
    for (i=0; i<n; i++){
        cout << "Input Bilangan ke-  " << i+1 << " : ";
        cin >> bil;
        sum = sum + bil; // cara cepat sum+=bil;
    }
    cout << "Jumlah deret bilangan : " << sum << endl;
    cout << "Nilai rata-rata deret bilangan : " << sum/n;  //jika sudah dikasi sum/n tidak perlu ditambah float

    return 0;
}
