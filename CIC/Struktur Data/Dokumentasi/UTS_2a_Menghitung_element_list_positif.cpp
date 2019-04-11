/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Kelas   : TI 1/2

    Program menghitung element list yang positif dengan array
*/

#include <iostream>

using namespace std;

main()
{
    int n, bil[100], jum_positif = 0;
    int i = 1;

    cout<<"Masukkan jumlah n : ";
    cin>>n;

    for(i; i<=n; i++) {
        cout<<"Masukkan bilangan ke-"<<i<<" = ";
        cin>>bil[i];
        if(bil[i] > 0 && bil[i] != 0) {
            jum_positif = jum_positif + 1;
        }
    }

    cout<<"Jumlah element yang bernilai positif ada : "<<jum_positif<<" buah";
}
