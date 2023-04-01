#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int baris, kolom, nilai=1;  //jika ingin membalik nilai diganti dengan angka yang dimulai dan nilai di decrement

    //ALGORITMA
    cout << "PENGULANGAN NESTED LOOP BARIS" << endl;
    for (baris=1; baris <=3; baris++){  //outer loop
        for (kolom=1; kolom <=3; kolom++){ //inner loop
            cout << nilai << "\t";
            nilai ++;
        }
        cout << endl; //aksi outer loop
    }
    nilai = 1;
    cout << endl << endl;
    cout << "PENGULANGAN NESTED LOOP GANJIL" << endl;
    for (baris=1 ; baris <=3; baris++){
        for (kolom=1; kolom<=3; kolom++){
            cout << nilai << "\t";
            nilai+=2;
                          //jika menggunakan if (nilai%2==1) tidak bisa karena hanya ngulang 3kali jadi kolom diganti 6
        }
        cout << endl;
    }




    return 0;
}

//jkai menggunakan if
/*for (baris=1 ; baris <=3; baris++){
        for (kolom=1; kolom<=6; kolom++){
            if (nilai%2==1){
            cout << nilai << "\t";
            nilai++;
*/
