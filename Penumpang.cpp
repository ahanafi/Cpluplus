#include <iostream>
#include <stdlib.h>

using namespace std;
main()
{
    int jp, jm;
    char replay;

    do{
        system("cls");
        cout<<"Masukkan jumlah penumpang : ";
        cin>>jp;

        if(jp % 7 == 0){
            jm = jp / 7;
        } else {
            jm = (jp / 7) + 1;
        }

        cout<<"Jumlah mobil yang dibutuhkan : "<<jm;
        cout<<"\n";
        cout<<"Ingin mengulang ? [Y/N] : ";
        cin>>replay;
    }while(replay == 'y' || replay == 'Y');
}
