/*
    Program ChatBot Sederhana
    {Program ChatBot Sederhana}
    Nama    : Eva Fadhillah Ulia
    NIM     : A11.2022.14283
    Kelas   : A11.4107
    Tanggal : Rabu,9 November 2022
*/

#include <iostream>

using namespace std;

void iya(){
        cout << "Informasi mengenai pendaftaran bisa ketik kata PENDAFTARAN : ";
    }

void jurusan(){
    cout << "Pendafataran UDINUS dibuka dari bulan Oktober - Juli" << endl;
    cout << "Jurusan yang ada di UDINUS : " << endl;
    cout << "Teknik Informatika" << endl;
    cout << "Desain Komunikasi Visual" << endl;
    cout << "Ilmu Komunikasi" << endl;
    cout << "Sistem Informasi" << endl;
    cout << "Akuntasi" << endl;
}
void tidak (){
    cout << "Finish" << endl;
}
int main()
{
    //KAMUS
    string nama, input;

    //ALGORITMA
    cout << "Masukkan nama : " << endl;
    cin >> nama;
    cout << "Hallo " << nama << " Selamat Datang di UDINUS, ada yang bisa kami bantu (iya/tidak) ? " << endl;
    awal :
    cin >> input;
    while(input!= "exit" ){
            if (input=="iya"){
                iya();
                goto awal;
                break;
            }
            else if(input=="PENDAFTARAN"){
                jurusan();
                goto awal;
                break;
            }
            else (input=="tidak");
                tidak ();
                break;
                cout << endl;
    }
return 0;
}
