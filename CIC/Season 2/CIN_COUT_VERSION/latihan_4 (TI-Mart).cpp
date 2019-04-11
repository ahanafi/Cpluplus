/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)
*/
/*
    Dalam rangka opening, TI-Mart memberikan diskon sebesar 10%
    dari setiap total belanja. Hitunglah total pembayaran belanja
    seorang konsumen pada TI-Mart tersebut!
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main()
{
    string kode, nama;
    int harga, jumlah_bayar, total;
    float diskon;
    int jumlah;

    cout<<"================================ \n";
    cout<<"          TI - MART\n";
    cout<<"================================ \n"<<endl;

    cout<<"Masukkan kode barang         : ";
    cin>>kode;
    cout<<"Masukkan nama barang         : ";
    cin>>nama;
    cout<<"Masukkan harga satuan barang : ";
    cin>>harga;
    cout<<"Masukkan jumlah barang yang dibeli : ";
    cin>>jumlah;

    jumlah_bayar = harga * jumlah;
    diskon = jumlah_bayar * 0.10;
    total = jumlah_bayar - diskon;

    cout<<"\n================================ \n";
    cout<<"Kode barang      : "<<kode<<endl;
    cout<<"Nama barang      : "<<nama<<endl;
    cout<<"Harga barang     : "<<harga<<endl;
    cout<<"Jumlah barang    : "<<jumlah<<endl;
    cout<<"Diskon           : "<<diskon<<endl;
    cout<<"Total pembayaran : "<<total<<endl;
}
