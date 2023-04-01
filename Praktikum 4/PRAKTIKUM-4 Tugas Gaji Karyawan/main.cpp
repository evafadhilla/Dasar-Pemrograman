/*
    PROGRAM GAJI KARYAWAN
    {Program Menentukan Upah Mingguan Karyawan}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int jam, lembur;
    int upah_jam = 150000;
    int upah_lembur = 100000;
    int upah, upah2, jam2; //jam2 jam lembur

    //ALgoritma
    cout << " Program Menentukan Upah Mingguan Karyawan PT. MAJU JAYA " << endl;
    cout << " ======================================================= " << endl;
    cout << " Jumlah Jam Kerja (mingguan) : ";
    cin >> jam;
    if (jam > 48)
    {
       lembur = (jam-48);
    }
    else {
        lembur = 2;
    }
    jam2 = (jam-lembur);
    upah_lembur = (100000*lembur);
    upah2 = (upah*jam2) + upah_lembur;

    cout << " Upah yang diterima mingguan : Rp. " << (upah_jam*jam2) + upah_lembur;

    return 0;
}
