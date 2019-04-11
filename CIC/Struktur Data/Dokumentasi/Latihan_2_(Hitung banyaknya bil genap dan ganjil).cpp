/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Kelas   : TI 1-2
    Membuat program menghitung banyaknya bilangan genap
    dan ganjil yang diinputkan
*/

#include <iostream>

using namespace std;

main()
{
    int n, x, ganjil = 0, genap = 0, bil;
    float rata, total = 0;

    cout<<"Masukkan banyak bilangan : ";
    cin>>n;

    for(x=1; x<=n; x++){
        cout<<"Masukkan bilangan ke-"<<x<<" : ";
        cin>>bil;
        total = total + bil;
        if(bil % 2 != 0) {
            ganjil = ganjil + 1;
        } else {
            genap = genap + 1;
        }
    }

    rata = total / n;
    cout<<"Rata-ratanya adalah : "<<rata<<endl;
    cout<<"Bilangan ganjil ada : "<<ganjil<<" buah \n";
    cout<<"Bilangan genap ada : "<<genap<<" buah \n";
}
