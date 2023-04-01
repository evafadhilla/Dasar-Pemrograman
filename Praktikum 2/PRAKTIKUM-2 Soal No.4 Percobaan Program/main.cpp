#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int panjang, lebar, keliling, luas;

    //ALGORITMA
    panjang = 5;
    lebar = 7;
    keliling = 2 * (panjang+lebar);
    luas = panjang * lebar;
    cout << "Program Mencari Keliling dan Luas Persegi Panjang" << endl;
    cout << "=================================================" << endl;
    cout << "Keliling = " << keliling << endl;
    cout << "Luas     = " << luas << endl;
    return 0;
}
