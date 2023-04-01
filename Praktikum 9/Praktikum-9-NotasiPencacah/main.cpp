/*
    PROGRAM CONTOH NOTASI PENGULANGAN BERDASARKAN PENCACAH
    {i traversal [1...n]}
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
    int i, n; //i untuk penanda n untuk batas inputannya

    //ALGOROITMA

    cout << "Input berapa kali diulang : ";
    cin >> n;
    for (; n>0; n--){      //=> decrement jika turun n>0 ;n-- => increment (i = 1; i<=n; i++)
        cout << "Mahasiswa" << endl;
    }
    cout << "Selesai" << endl;
    return 0;
}
