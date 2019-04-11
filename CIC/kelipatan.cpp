#include <iostream>

using namespace std;

main()
{
    int i, akhir;
    int kel;

    cout<<"Masukkan angka terakhir : ";
    cin>>akhir;

    cout<<"\n";

    for(i=1; i<=akhir; i++) {
        kel = i * i;
        cout<<"Kelipatan dari "<<i<<" adalah : "<<kel<<endl;
    }
}
