/*
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107

    SOAL SIMULASI UAS NO.2
    Buatlah program C++ yang membaca 10 data bilangan bulat sebagai inputan program.
    Misalkan data yang dimasukkan ke dalam Array berupa:
    1 2 3 4 5 6 7 8 9 0
    Maka, hasilnya berupa satu baris dengan bagian awal berupa daftar bilangan ganjil dan
    berikutnya berupa daftar bilangan genap sebagai berikut:
    1 3 5 7 9 2 4 6 8 0

*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    //1.DEKLARASI ARRAY
    int n,i;

    //ALGORITMA
    //2.INISIALISASI NILAI (INPUT ARRAY)
    cout << "Masukkan  data bilangan bulat : " ;
    cin >> n;
    int nilai [n];

    for (int i=0; i<n; i++){
        cout << "Bilangan ke- " << i+1 << " = ";
        cin >> nilai[i];
    }


    //3. OUTPUT ARRAY
    for (int i=1; i<10;i++){
        if (nilai[i]%2!=0)
        {
            cout << nilai[i];
        }
    }
    for (int i=1; i<10 ;i++ ){
            if (nilai[i]%2==0){
                cout <<nilai[i];
            }
        }


    return 0;
}
