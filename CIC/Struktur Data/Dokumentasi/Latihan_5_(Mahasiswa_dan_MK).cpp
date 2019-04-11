/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Kelas   : TI 1-2
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct{
    int kodeMK;
    string namaMK;
    int nilaiMK;
    float rataNilai;
} MataKuliah;

typedef struct{
    int nim;
    string nama;
    MataKuliah mk[100];
} Mahasiswa;

void line() {
    cout<<"====================================== \n";
};

void header() {
    line();
    cout<<"     SIMPLE PROGRAM ARRAY STRUCT       \n";
    line();
    cout<<"\n";
};

main()
{
    const int _max = 100;
    int n, i, j, k, x;
    Mahasiswa mhs[_max];

    header();
    cout<<"Masukkan banyak data Mahasiswa : ";
    cin>>n;

    //system("cls");
    line();
    cout<<"     INPUT DATA : \n";
    line();
    cout<<"\n";

    for(i=0; i<n; i++) {
        cout<<"Masukkan NIM ke-"<<i+1<<" [10 karakter] : ";
        cin>>mhs[i].nim;

        cout<<"Masukkan Nama Mahasiswa ke-"<<i+1<<"    : ";
        cin>>mhs[i].nama;


        for(j=0; j<2; j++) {
            cout<<"  Masukkan kode  MK ke-"<<j+1<<" : ";
            cin>>mhs[i].mk[j].kodeMK;

            cout<<"  Masukkan nama  MK ke-"<<j+1<<" : ";
            cin>>mhs[i].mk[j].namaMK;

            cout<<"  Masukkan nilai MK ke-"<<j+1<<" : ";
            cin>>mhs[i].mk[j].nilaiMK;

            cout<<"  ========================== \n"<<endl;
        }

        line();
        cout<<endl;
    }

    //OUTPUT
    //system("cls");
    cout<<"     OUTPUT DATA : \n";
    cout<<"\n";

    cout<<"==================================================== \n";
    cout<<" NO. |    NIM     | Nama Mahasiswa \n";
    cout<<"==================================================== \n";

    for(k=0; k<n; k++) {
        cout<<"  "<<k+1<<"  | "<<mhs[k].nim<<" | "<<mhs[k].nama<<endl;

        cout<<"==================================================== \n";
        cout<<"     NILAI : \n";
        cout<<"     =============================================== \n";
        cout<<"     Kode MK |   Nama MK | Nilai \n";

        for(x=0; x<2; x++) {
            cout<<"      "<<mhs[k].mk[x].kodeMK<<"   |   "<<mhs[k].mk[x].namaMK<<"\t | "<<mhs[k].mk[x].nilaiMK<<endl;
        }
        cout<<"==================================================== \n";
    }
}
