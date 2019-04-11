#include <iostream>
using namespace std;
main(){
    int bil[100], jum_ganjil, banyak;
    int i;

    jum_ganjil = 0;

    cout<<"Masukkan banyak bilangan yang ingin diinput : ";
    cin>>banyak;

    for(i=0; i<banyak; i++) {
        cout<<"Masukkan bilangan ke-"<<i+1<<" : ";
        cin>>bil[i];

        if(bil[i] % 2 == 1) {
            jum_ganjil = jum_ganjil + 1;
        }
    }

    cout<<"Bilangan ganjil ada "<<jum_ganjil<<endl;
}
