/*
    PROGRAM WUJUD AIR
    {Menuliskan wujud air sesuai dengan nilai s,s bisa diasumsikan sebagai suhu}
    {s dalam hal ini direpresentasikan dengan real}
    Nama  : EVA FADHILLAH ULIA
    NIM   : A11.2022.14283
    Kelas : A11.4107
*/

#include <iostream>

using namespace std;

int main()
{
    //KAMUS
    int suhu;

    //ALGORITMA
    cout << " Program Mengecek Wujud Air " << endl;
    cout << " ========================== " << endl;
    cout << " Masukkan suhu  air: ";
    cin >> suhu;
    if (suhu <= 0){
        cout << " Wujud air ==> Beku " << endl;
    }else if ((suhu > 0)&&(suhu <= 100)){
        cout << " Wujud air ==> Cair " << endl;
    }else if (suhu > 100){
        cout << " Wujud air ==> Uap" << endl;
    }else
        cout << " Inputan Salah" << endl;

    return 0;
}
