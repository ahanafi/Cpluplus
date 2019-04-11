/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Kelas   : TI 1-2

    Membuat program menghitung rata-rata dari n bilangan
    yang diinputkan
*/

#include <iostream>

using namespace std;

main()
{
    int n, x;
    float rata, bil, total = 0;

    cout<<"Masukkan banyak bilangan : ";
    cin>>n;
    cout<<"\n";

    for(x=1; x<=n; x++){
        cout<<"Masukkan bilangan ke-"<<x<<" : ";
        cin>>bil;
        total = total + bil;
    }

    rata = total / n;
    cout<<"\n";
    cout<<"Rata-ratanya adalah : "<<rata;
}
