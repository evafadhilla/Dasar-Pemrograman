/*
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107

    Program Matriks 2D Penjumlahan dengan inputan jumlah kolom dan baris serta nilai oleh user
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int x;
    int y;
    cout << "Masukkan baris : ";
    cin >> x;
    cout << "Masukkan kolom : ";
    cin >> y;
    int arr1[x][y];
    int arr2[x][y];

    //ALGORITMA
    //INISIALISASI INPUT ARRAY 1
    for (int i=0;i<x;i++){
        for (int j=0; j<y; j++){
            cout << "Input array 1 baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> arr1 [i][j];
        }
    }
    //INISIALISASI INPUT ARRAY 2
    for (int i=0;i<x;i++){
        for (int j=0; j<y;j++){
            cout << "Input array 2 baris ke-"<< i+1 << " kolom ke-" <<j+1 << " : ";
            cin >> arr2 [i][j];
        }
    }
    cout << " A \t+\t B \t= \tHasil" << endl;
    //OUTPUT ARRAY 1
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++)
        {
            cout << arr1[i][j] << " ";
        }
        //OUTPUT ARRAY 2
        cout << "\t\t";
        for (int k=0; k<y; k++){
            cout << arr2 [i][k] << " ";
        }
        cout << "\t\t";

        //OUTPUT HASIL PENJUMALAHAN
        for (int l=0; l<y ; l++)
            {
            cout << arr1[i][l] + arr2 [i][l] << " ";
            }
            cout << endl;
    }

    return 0;
}
