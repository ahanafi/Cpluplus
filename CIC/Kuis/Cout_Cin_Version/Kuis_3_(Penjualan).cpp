/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program menghitung total pembayaran di sebuah toko komputer
   This program created in Codeblocks
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

main()
{
    string kode_barang, nama_barang;
    int harga_barang, jumlah_barang, biaya_kirim;
    float diskon, besar_diskon, total_bayar, sub_total_bayar;
    string ket_1, ket_2;
    char payment_type, jasa_kirim;

    cout<<"========================================== \n";
    cout<<"       PROGRAM MENGHITUNG PENGJUALAN       \n";
    cout<<"========================================== \n";
    cout<<"\n";

    cout<<"Masukkan kode barang : ";
        cin>>kode_barang;
    cout<<"Masukkan nama barang : ";
        cin>>nama_barang;
    cout<<"Masukkan harga barang : ";
        cin>>harga_barang;
    cout<<"Masukkan jumlah barang : ";
        cin>>jumlah_barang;
    cout<<"Masukkan tipe pembayaran : \n";
    cout<<"\t T => Tunai \n";
    cout<<"\t K => Kredit \n";
    cout<<"Tipe pembayaran : ";
        cin>>payment_type;

    if(payment_type == 'T' || payment_type == 't') {
        diskon = 0.1;
        ket_1 = "TUNAI";
    } else {
        diskon = 0.05;
        ket_1 = "KREDIT";
    }

    sub_total_bayar = harga_barang * jumlah_barang;
    besar_diskon = diskon * sub_total_bayar;

    cout<<"Apakah ingin menggunakan jasa antar barang ? [Y/T] : ";
        cin>>jasa_kirim;

    if(jasa_kirim == 'Y' || jasa_kirim == 'y') {
        biaya_kirim = 25000;
        ket_2 = "YA";
    } else {
        biaya_kirim = 0;
        ket_2 = "TIDAK";
    }

    total_bayar = sub_total_bayar - besar_diskon + biaya_kirim;

    cout<<"\n";
    cout<<"========================================== \n";
    cout<<"HASIL \n";
    cout<<"========================================== \n";
    cout<<"Kode barang \t : "<<kode_barang<<"\n";
    cout<<"Nama barang \t : "<<nama_barang<<"\n";
    cout<<"Harga barang \t : "<<harga_barang<<"\n";
    cout<<"Jumlah barang \t : "<<jumlah_barang<<"\n";
    cout<<"Tipe pembayaran  : "<<ket_1<<"\n";
    cout<<"Jasa kirim \t : "<<ket_2<<"\n";
    cout<<"Diskon bayar \t : "<<besar_diskon<<"\n";
    cout<<"Biaya kirim \t : "<<biaya_kirim<<"\n";
    cout<<"========================================== \n";
    cout<<"TOTAL \t \t : "<<total_bayar;


}
