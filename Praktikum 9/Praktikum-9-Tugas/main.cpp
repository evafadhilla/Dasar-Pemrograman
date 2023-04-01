/*
    PROGRAM CETAK MATRIKS ANGKA
    {Program untuk menampilkan deret angka dengan inputan awal dan akhir serta menghitung rata-rata}
    Nama  : Eva Fadhillah Ulia
    Kelas : A11.4107
    NIM   : A11.2022.14283
*/

#include <iostream>

using namespace std;

int main()
{
    int awal, akhir, jumlah = 0, sum = 0;

    cout << "Input Awal dan Akhir = ";
    cin >> awal >> akhir;

    cout << endl;

    /*============================================ DERET BILANGAN  GENAP ==============================================*/

    awal += 1;

    cout << "Deret bilangan genap = ";

    for (int i = awal; i <= akhir; i += 2)
    {
        cout << i << "  ";
        sum += i;
        jumlah += 1;
    }

    cout << endl << "Jumlah deret bilangan genap antara " << awal << " sampai " << akhir << " = " << sum << endl;
    cout << "Rata-rata = " << sum / jumlah << endl;

    cout << endl;

    /*=========================================== DERET BILANGAN GANJIL ==============================================*/

    awal -= 1;
    sum = 0;
    jumlah = 0;

    cout << "Deret bilangan ganjil = ";

    for (int i = awal; i <= akhir; i += 2)
    {
        cout << i << "  ";
        sum += i;
        jumlah += 1;
    }

    cout << endl << "Jumlah deret bilangan ganjil antara " << awal << " sampai " << akhir << " = " << sum << endl;
    cout << "Rata-rata = " << sum / jumlah << endl;


    return 0;
}
