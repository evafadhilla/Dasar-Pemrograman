//ARRAY 2 DIMENSI
// 14 Desember


#include <iostream>

using namespace std;

int main()
{

    //KAMUS
    int x [3][4] = {
    {1, 2,   3, 4},
    {5, 6,   7, 8},
    {9, 10, 11, 12}};


    //ALGORITMA
    //INPUT ARRAY 2D
    for (int baris=0; baris<3; baris++){
        for(int kolom=0; kolom<4; kolom++){
            cout << "Input nilai baris ke-: ";
            cout << baris << " kolom ke-" ;
            cout << kolom << " = ";
            cin >> x [baris][kolom];
        }
    }
    // CETAK ARRAY 2D
    cout << endl << "TAMPILAN ARRAY 2 DIMENSI" << endl;
    for (int baris=0; baris<3; baris++){
        for (int kolom=0; kolom<4; kolom++){
            cout << x[baris][kolom] << "\t";
        }
        cout << endl;
    }

    return 0;
}
