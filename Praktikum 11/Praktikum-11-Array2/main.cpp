/*
    PROGRAM ARRAY VERSI KE 2
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,7 Desember 2022
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    //KAMUS
    //1&2. DEKLARASI DAN INISIALISASI ARRAY Secara Langsung
    // int nilai [5] ={1,2,3,4,5};
   // int nilai [5] = {1};
   //int nilai [5];  //kisi kisi uas perbedaan output baris 15-17
  //nilai [0]= 1;  //jika hanya mendeklarasikan satu aja jadi nilai lain outputnya acak/random
    //int nilai [] = {1,2,3,4,5};  //jika tidak mengisi nilainya langsung menyebutkan nilainya
    //int nilai[40];
    //memset ilai, 0, 40*sizeof(int)); //jika menggunakan memset tambahkan library #include <cstring
   float nilai [5] = {1,2,3,4,5};

    //ALGORITMA
    //3. OUTPUT
    /*
    cout << nilai[0] << endl;
    cout << nilai[1] << endl;
    cout << nilai[2] << endl;
    cout << nilai[3] << endl;
    cout << nilai[4] << endl;
    */



    //OUTPUT ARRAY DENGAN LOOP
    for(int i=0; i<5;i++){
        cout <<& nilai[i]<< endl;
    }
    cout << "Batas akhir array" << endl;
  //  cout << nilai [10] << endl;     //output di memori nilainya random karena nilai melebihi batas.
    return 0;
}
