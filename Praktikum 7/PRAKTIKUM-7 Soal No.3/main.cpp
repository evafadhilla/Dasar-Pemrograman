/*
    PROGRAM BMI
    {Program Menghitung BMI Index}
    Nama  : Eva Fadhillah Ulia
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
   //KAMUS
   float berat, tinggi,BMI;

   //ALGORITMA
   cout << "Program menghitung BMI index "<<endl;
   cout << "============================="<<endl;
   cout << "Berat Badan Anda (kg) : ";
   cin >> berat;
   cout << "Tinggi Badan Anda (m): ";
   cin >> tinggi;
   tinggi = tinggi/100;
   BMI =(berat/(tinggi*tinggi));
   cout << endl;
   cout << "Nilai BMI Anda :" << BMI <<endl;

   if (BMI<18.5){
    cout << "Anda termasuk kategori : kurus"<<endl;
   }else if ((BMI>=18.5)&&(BMI<25.5)){
       cout << "Anda termasuk kategori : normal"<<endl;
   }else if ((BMI>=25) &&(BMI<30)){
       cout << "Anda termasuk kategori : kelebihan berat badan"<<endl;
   }else if (BMI>=30){
       cout << "Anda termasuk kategori : kegemukan"<<endl;
   }
   return 0;

}

