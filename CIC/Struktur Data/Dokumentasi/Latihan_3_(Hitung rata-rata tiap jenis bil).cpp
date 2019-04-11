/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Kelas   : TI 1-2

    Membuat program menghitung rata-rata dari bilangan
    genap dan ganjil
*/

#include <iostream>
using namespace std;
main()
{
    int n, x, ganjil = 0, genap = 0, bil;
    float rata, total = 0, jum_ganjil = 0, jum_genap = 0, r_ganjil, r_genap;

    cout<<"Masukkan banyak bilangan : ";
    cin>>n;

    for(x=1; x<=n; x++){
        cout<<"Masukkan bilangan ke-"<<x<<" : ";
        cin>>bil;
        total = total + bil;
        if(bil % 2 != 0) {
            ganjil = ganjil + 1;
            jum_ganjil = jum_ganjil + bil;
        } else {
            genap = genap + 1;
            jum_genap = jum_genap + bil;
        }
    }

    rata = total / n;
    r_ganjil = jum_ganjil / ganjil;
    r_genap  = jum_genap  / genap;
    cout<<"\n";
    cout<<"Rata-rata total adalah : "<<rata<<endl;
    cout<<"Rata-rata bil. ganjil  : "<<r_ganjil<<endl;
    cout<<"Rata-rata bil. genap   : "<<r_genap<<endl;
    cout<<"Bilangan ganjil ada : "<<ganjil<<" buah \n";
    cout<<"Bilangan genap ada : "<<genap<<" buah \n";
}
