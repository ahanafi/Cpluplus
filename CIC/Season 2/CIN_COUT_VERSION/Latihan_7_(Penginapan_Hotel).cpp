/*
Nama    : Ahmad Hanafi
NIM     : 2017102020
Prodi   : Teknik Informatika
Semester: 2 (Dua)
*/
/*
Program Menghitung Total Pembayaran untuk penginapan tamu pada suatu Hotel
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main()
{
//Biodata pengunjunag
	char nama[100];
	int no_ktp;
	char status;

//Detail penginapan
	int tgl_masuk, tgl_keluar, jum_kamar, lama_inap;
	const float pajak = 0.05;
	long int total_bayar, total_harga_kamar;
	int diskon = 20000, harga_kamar;
	long int besar_pajak;

	cout<<"PROGRAM MENGHITUNG TOTAL PEMBAYARAN HOTEL \n";

	cout<<"\n";
	cout<<"Masukkan Nomor KTP Anda : ";
	cin>>no_ktp;
	cout<<"Masukkan Nama Anda : ";
	cin>>nama;
	cout<<"Masukkan Status Anda [M => Menikah, L => Lajang] : ";
	cin>>status;

	cout<<"Masukkan Tanggal check in : ";
	cin>>tgl_masuk;
	cout<<"Masukkan Tanggal check out : ";
	cin>>tgl_keluar;

	cout<<"Masukkan jumlah Kamar yang disewa : ";
	cin>>jum_kamar;
	cout<<"Masukkan harga kamar per hari : ";
	cin>>harga_kamar;

	lama_inap = tgl_keluar - tgl_masuk;
	total_harga_kamar = lama_inap * harga_kamar * jum_kamar;
	besar_pajak = total_harga_kamar * pajak;
	total_bayar = total_harga_kamar - besar_pajak + diskon;

	cout<<"Total pembayaran adalah : "<<total_bayar;
	getch();


}
