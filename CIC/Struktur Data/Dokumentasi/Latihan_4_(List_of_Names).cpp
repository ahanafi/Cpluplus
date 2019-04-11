/*
    Nama    : Ahmad Hanafi
    Kelas   : TI 1-2
    NIM     : 2017102020

    Program array => Input nama dan menampilkannya lagi ke layar
*/
#include <iostream>

using namespace std;
main()
{
    string nama[100];
    int n, i, j;

    cout<<"Masukkan banyak nama yang ingin di input : ";
    cin>>n;
    cout<<"\n";

    for(i=0; i<n; i++) {
        cout<<"Masukkan nama index ke-"<<i+1<<" : ";
        cin>>nama[i];
    }

    cout<<"\n";
    cout<<"Berikut daftar nama yang telah Anda input : \n"<<endl;
    for(j=0; j<n; j++) {
        cout<<"Nama dalam index ke-"<<j<<" adalah : "<<nama[j]<<endl;
    }
}
