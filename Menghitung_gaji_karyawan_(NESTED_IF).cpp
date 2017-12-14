/*
    SOAL :  "Buatlah algoritma (prgoram) untuk menghitung gaji seorang karyawan dengan ketentuan gaji dihitung
            berdasarkan golongan, status, lembur, tunjangan dan pajak";

    Golongan        Gaji Pokok      /    Status      Tunjangan
        I           Rp3.000.000     /    Menikah     Rp500.000
        II          Rp2.000.000     /    Lajang      Rp300.000
        III         Rp1.500.000     /

    - Pajak             : 10% dari Gaji Pokok
    - Jam kerja normal  : 200 jam/bulan atau 8 jam /hari
    - Gaji lembur       : jam lembur x Rp20.000
    - Gji bersih        : (Gaji pokok + gaji lembur + tunjangan) - pajak

*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void data_golongan()
{
    cout<<"DATA GOLONGAN : "<<endl;
    cout<<"========================================================= \n";
    cout<<"| Kode Golongan  \t |        Besar Gaji Pokok      | \n";
    cout<<"|======================================================== \n";
    cout<<"|        1       \t |        Rp3.000.000,-         | \n";
    cout<<"|        2       \t |        Rp2.000.000,-         | \n";
    cout<<"|        3       \t |        Rp1.500.000,-         | \n";
    cout<<"========================================================= \n";
    cout<<"\n"<<endl;
}

void data_status()
{
    cout<<"DATA STATUS : "<<endl;
    cout<<"==================================================================== \n";
    cout<<"| Status  \t| \t Kode Status \t |    Besar Tunjangan      | \n";
    cout<<"==================================================================== \n";
    cout<<"| Menikah \t| \t     M       \t |        Rp500.000,-      | \n";
    cout<<"| Lajang  \t| \t     L       \t |        Rp200.000,-      | \n";
    cout<<"==================================================================== \n";
    cout<<"\n"<<endl;
}

main()
{
    //string nama, no_induk;
    char nama[100], no_induk[10];
    int kode_golongan, jam_lembur, jam_kerja;
    int gaji_lembur, gaji_pokok, gaji_bersih, tunjangan, besar_pajak;
    char status;

    cout<<"Hi!, Selamat Datang di Program Sederhana ini! :) \n";
    cout<<"Masukkan Nama Anda [Gunakan UNDERSCORE untuk SPASI] : ";
    cin>>nama;

    if(nama != "" || strlen(nama) == 0){
        //system("cls");
        cout<<"Masukkan Nomor Induk Karyawan disini : ";
        cin>>no_induk;

        if(no_induk != "" || strlen(no_induk) == 0){

            cout<<"Hi "<<strupr(nama)<<"!, \n";
            cout<<endl;
            data_golongan();

            cout<<"Masukkan kode gologan karyawan [1/2/3] : ";
            cin>>kode_golongan;

            if(kode_golongan == 1){
                gaji_pokok = 3000000;
            } else if(kode_golongan == 2){
                gaji_pokok = 2000000;
            } else {
                gaji_pokok = 1500000;
            }

            //system("cls");
            data_status();
            cout<<"Masukkan kode status karyawan [M/L] : ";
            cin>>status;

            if(status == 'M' || status == 'm'){
                tunjangan = 500000;
            } else {
                tunjangan = 300000;
            }

            cout<<"\n";
            cout<<"Masukkan lama jam kerja karyawan dalam 1 bulan [normal 200jam/bln]: ";
            cin>>jam_kerja;

            if(jam_kerja > 200){
                jam_lembur = jam_kerja - 200;
            } else {
                jam_lembur = 0;
            }

            gaji_lembur = jam_lembur * 20000;
            besar_pajak = gaji_pokok * 0.1;
            gaji_bersih = (gaji_pokok + tunjangan + gaji_lembur) - besar_pajak;

            cout<<"Gaji Pokok \t : "<<gaji_pokok<<endl;
            cout<<"Jam Lembur \t : "<<jam_lembur<<endl;
            cout<<"Gaji Lembur \t : "<<gaji_lembur<<endl;
            cout<<"Besar Pajak \t : "<<besar_pajak<<endl;
            cout<<"Besar Tunjangan  : "<<tunjangan<<endl;
            cout<<"\n";
            cout<<"Besar pendapatan karyawan adalah Rp"<<gaji_bersih;

        } else {
            system("cls");
            system("color 4C");
            cout<<"Maaf NIK harus diisi!";
        }
    } else {
        system("cls");
        system("color 4C");
        cout<<"Maaf nama harus diisi!";
    }
}

/*
    Copyright 2017 - Created by Ahmad Hanafi
*/
