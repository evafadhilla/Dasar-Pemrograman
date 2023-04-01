/*
    ARRAY 3 DIMENSI
    14 Desember 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int jb;
    int jk;
    int jd;
    cout << "Masukan Baris Kolom Dalam ke- : ";
    cin>>jb>>jk>>jd;
    int x[jb][jk][jd];
    cout << endl;
    //ALGORITMA
    //CETAK ARRAY 3D
    for(int baris=0; baris<jb; baris++){
        for(int kolom=0; kolom<jk; kolom++){
            for(int dalam=0; dalam<jd; dalam++){
            cout << "Input Nilai baris ke- : ";
            cout << baris << " Kolom ke-";
            cout << kolom << " Dalam ke-";
            cout << dalam << " = ";
            cin>>x[baris][kolom][dalam];
            }
            cout << endl;
        }
        cout<<endl;
    }
        //CETAK ARRAY 3D
        cout << endl << "Tampilan Array 3D" << endl;
        for(int baris=0; baris<jb; baris++){
            for(int kolom=0; kolom<jk; kolom++){
                for(int dalam=0; dalam<jd; dalam++){
                    cout << x[baris][kolom][dalam];
                    cout << "\t";
                }
                cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
