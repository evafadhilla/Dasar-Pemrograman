/*
    NETSED LOOP 2
    {Program Membuat Matriks Dinamis dengan Inputan Baris dan Kolom}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,30 November 2022
*/


#include <iostream>

using namespace std;

int main()
{
   //KAMUS
   int baris, kolom, nbaris, nkolom, nilai;

   //ALGORITMA
   cout << "Input Matriks [baris kolom] : ";
   cin >> nbaris >> nkolom;
   //FOR - FOR
   nilai = 1;
   /*
   for (baris=1; baris <= nbaris; baris++){
    for (kolom=1; kolom <= nkolom; kolom++){
        cout << nilai << "\t";
        nilai++;  //n+=1;

    }
    cout << endl;
   }
   */

   //WHILE - FOR
  /*
   baris = 1;
   while (baris<=nbaris){
         baris++;
    cout << baris << "\t";
    for (kolom=1; kolom<=nkolom; kolom++){
        cout << nilai << "\t";
        nilai ++;
    }
   cout << endl;
   }
*/
   //FOR -WHILE
  /* for (baris=1; baris<=nbaris; baris++){
    kolom=1;
    while(kolom<=nkolom){
        kolom++;
        cout << nilai << "\t";
        nilai++;
    }
    cout << endl;
   }
   */

   // DO WHILE - FOR
  /* baris = 1;
   do {
        baris++;
        for (kolom=1; kolom<=nkolom; kolom++){
            cout << nilai << "\t";
            nilai++;
        }
        cout << endl;
   } while(baris<=nbaris);
   */

   //WHILE - DO WHILE
   baris =1;
   while (baris <= nbaris){
        baris++;
        kolom=1;
        do{
            kolom++;
            cout << nilai << "\t";
            nilai++;
        }while(kolom <= nkolom);
        cout << endl;
   }
    return 0;
}
