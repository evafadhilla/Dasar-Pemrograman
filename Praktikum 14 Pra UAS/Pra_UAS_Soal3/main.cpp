/*
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107

    SOAL SIMULASI UAS NO.3
    Buatlah program C++ yang menyimpan data berikut dalam satu Array :
    25 28 3 13 16 31 38 6 18 23

    Selanjutnya, program menyajikan keseluruhan data dalam bentuk grafik. Sebagai contoh,
    nilai 3 dan 13 akan disajikan seperti berikut :
    3 : ***
    13 : *************
    Gunakan konsep Array dan Nested Loop untuk menyelesaikannya.

*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int arr[10];

    //ALGORITMA
    cout << "Masukkan deret angka : ";
    for (int i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    cout << endl;
     for (int i=0; i<10; i++)
    {
        cout << arr[i] << " : ";
        for (int j=0; j<arr[i]; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
