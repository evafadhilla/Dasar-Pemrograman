/*
    TUGAS PRAKTIKUM 11
    PROGRAM ARRAY 3 => ARRAY DINAMIS
    {Program Array dengan memasukkan inputan dan mendeteksi nilai ganjil,menampilkan jumlah dan rata-rata pada inputan array}
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

    //1. Deklarasi Nilai

    int n, i, bil, b;

    //ALGORITMA
    cout << "Masukkan Jumlah Inputan : ";
    cin >> n;
    int nilai [n];
    string kata []={"Genap","Ganjil"};

    for (i=0; i<n; i++)
    {
        cout << "Input nilai ke- " << i+1 << " : ";
        cin >> bil;
        nilai[i]=bil;
    }
    float j,r;

    //Output Array
    for (int k=0; k<2; k++)
    {
        j=0;r=0;b=0;
        cout << "\nBilangan " << kata[k]<< " : ";
        for (int i=0; i<n; i++)
        {
            if (nilai[i]%2==k)
            {
                cout << nilai[i];
                if (n-2>i)
                {
                    cout << " , ";
                }
                j=j+nilai[i];
                b++;
            }
        }
        cout << "\nJumlah : " << j;
        r = j/b;
        cout << "\nRata-rata : " << r << endl;
    }

    return 0;
}
