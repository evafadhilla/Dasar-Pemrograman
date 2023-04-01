/*
    Program ChatBot Sederhana
    {program chatbot sederhana, tanya “apa mau belok kiri? (y/t)” dengan diberikan
    variabel belokkiri yang merupakan input user yang bertipe karakter}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,9 November 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char belokkiri;

    //ALGORITMA
    do
    {
        cout << " apa mau belok kiri ? (y/t) : " ;
        cin >> belokkiri;
    }while (belokkiri != 'y');
    cout << " Finish " << endl;
    return 0;
}
