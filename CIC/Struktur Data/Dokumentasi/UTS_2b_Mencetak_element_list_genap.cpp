/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Kelas   : TI 1/2

    Program mencetak element list yang genap dengan array
*/

#include <iostream>

using namespace std;

main()
{
    int n, bil[100];
    int i = 1, j = 1;

    cout<<"Masukkan jumlah n : ";
    cin>>n;

    for(i; i<=n; i++) {
        cout<<"Masukkan bilangan ke-"<<i<<" = ";
        cin>>bil[i];
    }

    cout<<"\n";
    cout<<"Berikut adalah list element yang genap : "<<endl;
    int inc = 1;
    for(j; j<=n; j++) {
        if(bil[j] % 2 == 0) {
            cout<<"Bilangan genap ke-"<<inc<<" berada pada index "<<j<<" adalah : "<<bil[j]<<endl;
            inc = inc + 1;
        }
    }
}
