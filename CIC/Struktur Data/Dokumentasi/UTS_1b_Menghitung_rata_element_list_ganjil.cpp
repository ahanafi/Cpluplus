/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Kelas   : TI 1/2

    Program menghitung rata-rata element list yang ganjil dengan array
*/

#include <iostream>

using namespace std;

main()
{
    int n, bil[100], jum_ganjil = 0;
    int i = 1;
    float r_ganjil, tot_ganjil = 0;

    cout<<"Masukkan jumlah n : ";
    cin>>n;

    for(i; i<=n; i++) {
        cout<<"Masukkan bilangan ke-"<<i<<" = ";
        cin>>bil[i];
        if(bil[i] % 2 != 0) {
            jum_ganjil = jum_ganjil + 1;
            tot_ganjil = tot_ganjil + bil[i];
        }
    }

    r_ganjil = tot_ganjil / jum_ganjil;
    cout<<"Jumlah element yang bernilai ganjil ada : "<<jum_ganjil<<" buah"<<endl;
    cout<<"Rata-rata element yang bernilai ganjil   : "<<r_ganjil<<endl;
}
