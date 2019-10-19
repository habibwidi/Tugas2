#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int angka;
    char ulang ='y';
    while(ulang=='y'){
        cout << "Masukkan angka (10-100) :" ;
        cin >> angka;
        int jwbn = rand()%angka;
        cout << "cheat:ini angkanya " << jwbn <<endl;
        int nyawa = 3;
        int tebak;
        cout << "Masukkan tebakkan nilai antara 0 sampai " << angka << endl;
             while(nyawa!=0){
                cout << "Masukkan tebakan anda :";
                cin >> tebak;
                if(tebak==jwbn){
                    cout << "Anda Dukun!!" << endl;
                    break;
                }else if(tebak<jwbn){
                        cout << "Tebakan anda terlalu kecil !!" <<endl;
                    }else{
                        cout << "Tebakan anda terlalu besar !!" <<endl;
                    }
                    cout << "Tebakan anda salah !!, nyawa anda :" << nyawa << endl <<endl;
                    nyawa--;
                }
                while (nyawa == 0){
                    cout << "0001110";
                }
            cout << "Mau ulangi (y/t) :";
            cin >>ulang;
        }
    return 0;
}
