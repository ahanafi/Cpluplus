#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct {
    float uts, uas;
} Nilai;

typedef struct {
    int nim;
    string nama;
    Nilai nilai;
} Mahasiswa;

main()
{
    Mahasiswa mhs[100];
    int n;

    cout<< "Masukkan banyak data : ";
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<"Mahasiswa ke-"<<i<<endl;
        cout<<"======================= \n";
        cout<<"Masukkan nim    : ";
        cin>>mhs[i].nim;
        cout<<"Masukkan nama   : ";
        cin>>mhs[i].nama;
        cout<<"Masukkan Nilai UTS : ";
        cin>>mhs[i].nilai.uts;
        cout<<"Masukkan Nilai UAS : ";
        cin>>mhs[i].nilai.uas;
        cout<<"\n======================\n";
    }

    for(int i=0; i<n; i++) {
        cout<<"Mahasiswa ke-"<<i<<endl;
        cout<<"======================= \n";
        cout<<"NIM       : "<<mhs[i].nim<<endl;
        cout<<"Nama      : "<<mhs[i].nama<<endl;
        cout<<"Nilai UTS : "<<mhs[i].nilai.uts<<endl;
        cout<<"Nilai UAS : "<<mhs[i].nilai.uas<<endl;
        cout<<"\n======================\n";
    }

}
