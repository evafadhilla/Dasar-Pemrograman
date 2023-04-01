/*
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107

    SOAL SIMULASI UAS NO.1
    Program C++ yang memberikan keluaran deret menggunanakan konsep Looping
    dengan inputan sebanyak n buah
*/


#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int n;
    int i=1;    // => untuk int pada while

    //ALGORITMA
    cout << "Input jumlah perulangan (n) : ";
    cin >> n;

    // Menggunakan Looping FOR
 /*
    for (int i=1; i<=n; i++)
    {
        cout <<   i*i  << endl;

    }
*/

    //Menggunakan Looping WHILE
    while (i<=n)
    {
        cout << i*i << endl;
        i++;
    }
    return 0;
}
