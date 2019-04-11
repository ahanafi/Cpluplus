/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)

    Program Menghitung total pembayaran untuk penyewaan komik

    This program created at Codeblocks
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

main()
{
    string nama, ket;
    char status;
    int banyak_komik;
    int tanggal_pinjam, tanggal_kembali, lama_pinjam;
    float biaya_sewa, sub_biaya, total_biaya, harga_komik, besar_diskon, besar_denda;
    const float diskon = 0.1;
    const int denda = 3000;

    cout<<"======================================== \n";
    cout<<"             KOMIK STUDIOS               \n";
    cout<<"======================================== \n";
    cout<<"\n";

    cout<<"Masukkan nama Anda : ";
        cin>>nama;
    cout<<"Masukkan status Anda : \n ";
    cout<<"\t M => Member \n";
    cout<<"\t N => Non-Member \n";
    cout<<"Status : ";
        cin>>status;
    cout<<"Masukkan harga per komik : ";
        cin>>harga_komik;
    cout<<"Masukkan jumlah komik : ";
        cin>>banyak_komik;

    sub_biaya = banyak_komik * harga_komik;
    if((banyak_komik > 3) && (status == 'M' || status == 'm')) {
        besar_diskon = sub_biaya * diskon;
        ket = "MEMBER";
    } else {
        besar_diskon = sub_biaya * 0;
        ket = "NON-MEMBER";
    }

    cout<<"Masukkan tanggal pinjam : ";
        cin>>tanggal_pinjam;
    cout<<"Masukkan tanggal kembali : ";
        cin>>tanggal_kembali;

    lama_pinjam = tanggal_kembali - tanggal_pinjam;
    if(lama_pinjam > 3) {
        besar_denda = banyak_komik * (lama_pinjam - 3) * denda;
    } else {
        besar_denda = banyak_komik * 0;
    }

    biaya_sewa = sub_biaya - besar_diskon;
    total_biaya = biaya_sewa + besar_denda;

    system("cls");
    cout<<"======================================== \n";
    cout<<"             KOMIK STUDIOS               \n";
    cout<<"======================================== \n";
    cout<<"\n";
    cout<<"Nama \t \t : "<<nama<<endl;
    cout<<"Status \t \t : "<<ket<<endl;
    cout<<"Harga per komik  : Rp."<<harga_komik<<endl;
    cout<<"Banyak komik \t : "<<banyak_komik<<" buah \n";
    cout<<"Diskon \t \t : "<<besar_diskon<<endl;
    cout<<"Tanggal Pinjam \t : "<<tanggal_pinjam<<endl;
    cout<<"Tanggal kembali  : "<<tanggal_kembali<<endl;
    cout<<"Lama pinjam \t : "<<lama_pinjam<<" hari \n";
    cout<<"Denda \t \t : Rp."<<besar_denda<<endl;
    cout<<"======================================== \n";
    cout<<"TOTAL \t \t : Rp."<<total_biaya<<endl;
    cout<<"======================================== \n";




}
