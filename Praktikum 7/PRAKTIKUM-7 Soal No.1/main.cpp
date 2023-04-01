/*
    Program Huruf
    Program Untuk Menentukan Huruf atau Buka
    Nama : Eva Fadhillah Ulia
    NIM  : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    char huruf;

    //ALGORITMA
    cout << "Program Untuk Menentukan Huruf atau Bukan" << endl;
    cout << "=========================================" << endl;
    cout << "Input Karakter : ";
    cin >> huruf;
    if(huruf == 'a' |huruf=='b'|huruf=='c'|huruf=='d'|huruf=='e'|huruf=='f'|huruf=='g'|huruf=='h'|huruf=='i'|huruf=='j'|huruf=='k'
       |huruf=='l'|huruf=='m'|huruf=='n'|huruf=='o'|huruf=='p'|huruf=='q'|huruf=='r'|huruf=='s'|huruf=='t'|huruf=='u'|huruf=='v'
       |huruf=='w'|huruf=='x'|huruf=='y'|huruf=='z'|huruf=='A'|huruf=='B'|huruf=='C'|huruf=='D'|huruf=='E'|huruf=='I'|huruf=='J'
       |huruf=='K'|huruf=='L'|huruf=='M'|huruf=='N'|huruf=='O'|huruf=='P'|huruf=='Q'|huruf=='R'|huruf=='S'|huruf=='T'|huruf=='U'
       |huruf=='V'|huruf=='W'|huruf=='X'|huruf=='Y'|huruf=='Z')
    cout << huruf << " Adalah huruf";
    else{
          cout << huruf << " Adalah bukan huruf";
      }

    return 0;
}

