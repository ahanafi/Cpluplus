#include <iostream>

using namespace std;

main()
{
    int bil_awal, bil_akhir;
    int index = 1;

    cout<<"Masukkan awal bilangan : ";
    cin>>bil_awal;
    cout<<"Masukkan akhir bilangan : ";
    cin>>bil_akhir;

    //1. Pake while
    /*
    while(bil_awal <= bil_akhir){
        //cout<<"Bilangan ke-"<<index<<" adalah "<<bil_awal<<"\n";
        cout<<bil_awal<<", ";
        bil_awal = bil_awal + 1;
        //index = index + 1;
    }*/

    //2. Pake for
    for(int i=bil_awal; i<=bil_akhir; i++){
        cout<<i<<", ";
    }
}
