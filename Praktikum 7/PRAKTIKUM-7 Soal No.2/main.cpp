/*
    PROGRAM JARAK
    {Program Menghitung Jarak Antara 2 Titik}
    Nama : Eva Fadhillah Ulia
    NIM  : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   //KAMUS
   float x1, y1, x2, y2, A, B,Jarak;
   Jarak=0;

   //ALGORITMA
   cout << "Menghitung jarak 2 titik"<<endl;
   cout << "========================"<<endl;
   cout << "Masukkan titik x1 : ";
   cin >> x1;
   cout << "Masukkan titik y1 : ";
   cin >> y1;
   cout << "Masukkan titik x2 : ";
   cin >> x2;
   cout << "Masukkan titik y2 : ";
   cin >> y2;
   A= (x2-x1)*(x2-x1);
   B= (y2-y1)*(y2-y1);
   Jarak =sqrt (A+B);
   cout << "Jarak titik A ke titik B : " << Jarak << endl;
   return 0;
}
