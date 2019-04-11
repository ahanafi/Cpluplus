#include <iostream>

using namespace std;

typedef struct{
    string nama;
    char gol;
    int jam_lembur, upah_lembur, total_gaji;
    int tarif_kyw, gaji_kyw;
} Karyawan;

void line()
{
    cout<<"============================================== \n";
}

void data_master()
{
    line();
    cout<<"| KODE |   GAJI POKOK    |   TARIF LEMBUR    | \n";
    line();
    cout<<"|  A   |   750.000       |   10.000          | \n";
    cout<<"|  B   |   900.000       |   12.500          | \n";
    cout<<"|  C   |   1.000.000     |   15.000          | \n";
    line();
}

void welcome()
{
    line();
    cout<<"           SELAMAT DATANG DI \n";
    cout<<"PRORGRAM PENGHITUNG PENDAPATAN KARYAWAN \n";
    line();
    cout<<"\n";
}

main()
{
    int n;
    const int maxdata = 100;
    int gaji, tarif_lembur, total_gaji_all = 0;
    char ulang;
    Karyawan kyw[maxdata];

    welcome();
    data_master();

    cout<<"\n";
    cout<<"Masukkan banyak karyawan : ";
    cin>>n;

    cout<<"INPUT DATA : \n";
    cout<<"============================== \n";
    for(int i=0; i<n; i++)
    {
        cout<<"Masukkan nama ke-"<<i+1<<" : ";
        cin>>kyw[i].nama;

        cout<<"Masukkan kode golongan [A/B/C] : ";
        cin>>kyw[i].gol;

        cout<<"Masukkan jam lembur : ";
        cin>>kyw[i].jam_lembur;

        if(kyw[i].gol == 'A')  {
            gaji = 750000;
            tarif_lembur = 10000;
        } else if(kyw[i].gol == 'B') {
            gaji = 900000;
            tarif_lembur = 12500;
        } else {
            gaji = 1000000;
            tarif_lembur = 15000;
        }

        kyw[i].tarif_kyw = tarif_lembur;
        kyw[i].gaji_kyw  = gaji;
        kyw[i].upah_lembur = kyw[i].jam_lembur * kyw[i].tarif_kyw;
        kyw[i].total_gaji  =kyw[i].upah_lembur + kyw[i].gaji_kyw;

        total_gaji_all = total_gaji_all + kyw[i].total_gaji;

        cout<<"============================== \n";
    }

    cout<<"\n";
    cout<<"HASIL : \n";
    for(int j=0; j<n; j++)
    {
        cout<<"\t Nama ke-"<<j+1<<" : "<<kyw[j].nama<<"\n";
        cout<<"\t Golongan : "<<kyw[j].gol<<"\n";
        cout<<"\t Gaji \t : "<<kyw[j].gaji_kyw<<"\n";
        cout<<"\t Tarif lembur : "<<kyw[j].tarif_kyw<<"\n";
        cout<<"\t Jam lembur : "<<kyw[j].jam_lembur<<"\n";
        cout<<"\t Upah lembur : "<<kyw[j].upah_lembur<<"\n";
        cout<<"\t Total Gaji : "<<kyw[j].total_gaji<<"\n";
        cout<<"\n";
        cout<<"============================== \n";
    }

    cout<<"Total gaji seluruh pegawai : "<<total_gaji_all;

}
