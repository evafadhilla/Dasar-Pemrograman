//ARRAY 2 DIMENSI DUA untuk menyimpan gambar
// 14 Desember


#include <iostream>

using namespace std;

int main()
{

    //KAMUS
    int jumbaris, jumkolom;

    cout << "Inputan Array [jumbaris] [jumbkolom] :";
    cin >> jumbaris >> jumkolom;
    int x [jumbaris][jumkolom];

    cout << endl ;

    //ALGORITMA
    //INPUT ARRAY 2D
    for (int baris=0; baris<jumbaris; baris++){
        for(int kolom=0; kolom<jumkolom; kolom++){
            cout << "Input nilai baris ke-: ";
            cout << baris << " kolom ke-" ;
            cout << kolom << " = ";
            cin >> x [baris][kolom];
        }
    }
    // CETAK ARRAY 2D
    cout << endl << "TAMPILAN ARRAY 2 DIMENSI" << endl;
    for (int baris=0; baris<jumbaris; baris++){
        for (int kolom=0; kolom<jumkolom; kolom++){
            cout << x[baris][kolom] << "\t";
        }
        cout << endl;
    }

    return 0;
}

