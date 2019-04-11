#include <iostream>

using namespace std;

typedef struct {
    int nim;
    string nama;
    char nilai;

} Mhs;

main()
{
    const int Nmax = 100;
    Mhs TabMhs[Nmax];
    int k, n;

    /* DESKRIPSI */

    cout<<"Masukkan n : ";
    cin>>n;

    for(k = 1; k<= n; k++) {
        cout<<"Masukkan nim mhs ke-"<<k<<" : ";
        cin>>TabMhs[k].nim;
        cout<<"Masukkan nama mhs ke-"<<k<<" : ";
        cin>>TabMhs[k].nama;
        cout<<"Masukkan nilai mhs ke-"<<k<<" : ";
        cin>>TabMhs[k].nilai;
        cout<<"============================ \n";
    }
}
