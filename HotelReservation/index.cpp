#include <iostream>
#include <stdio.h>

#include "dataTableHotel.cpp"

using namespace std;

void line()
{
	cout<<"================================================================== \n";
}

void welcome()
{
	line();
	cout<<"\t   \t SELAMAT DATANG DI HOTEL TIFO \t \t \n";
	line();
	cout<<endl;
}

main()
{
    string nama_tamu, kode_fs, nama_fs;
    int kelas, harga_kamar, lama_hari, total_biaya_fs, total_biaya_akhir;
    int tanggal_masuk, tanggal_keluar, lama_inap;
    int diskon;
    char status;

	welcome();

	cout<<"Masukkan Nama Anda [Gunakan UNDERSCORE u/ penggati SPASI] : ";
	cin>>nama_tamu;

	cout<<"Masukkan status Anda [M = Member, N = Not Member] : ";
	cin>>status;

	cout<<"Masukkan tanggal Check-In Anda : ";
	cin>>tanggal_masuk;

	cout<<"Masukkan tangggal Check-Out Anda : ";
	cin>>tanggal_keluar;

	lama_inap = tanggal_keluar - tanggal_masuk;
	cout<<"\n";
	Data().showTablePrice();

	cout<<"Masukkan kode Kelas kamar yang dipakai [1/2/3] : ";
	cin>>kelas;

	harga_kamar       = Data().list_price_per_class[kelas-1];
	int harga_laundry = Data().list_price_of_laundry[kelas-1];
	int harga_spa     = Data().list_price_of_spa[kelas-1];
	int harga_fitness = Data().list_price_of_fitness[kelas-1];

	cout<<"\n";
	Data().showTableFacilities();
	cout<<"Masukkan kode fasilitas yang dipakai : ";
	cin>>kode_fs;

	if(kode_fs == "LSF" || kode_fs == "lsf"){
        total_biaya_fs = harga_laundry+harga_spa+harga_fitness;
        nama_fs = "Laundry, SPA, Fitness";
	} else if(kode_fs == "LS" || kode_fs == "ls"){
		total_biaya_fs = harga_laundry+harga_spa;
		nama_fs = "Laundry, Fitness";
	} else if(kode_fs == "LF" || kode_fs == "lf"){
		total_biaya_fs = harga_laundry+harga_fitness;
		nama_fs = "Laundry, SPA";
	} else if(kode_fs == "SF" || kode_fs == "sf"){
		total_biaya_fs = harga_spa+harga_fitness;
		nama_fs = "SPA, Fitness";
	} else if(kode_fs == "L" || kode_fs == "l"){
		total_biaya_fs = harga_laundry;
		nama_fs = "Laundry";
	} else if(kode_fs == "S" || kode_fs == "s"){
		total_biaya_fs = harga_spa;
		nama_fs = "SPA";
	} else{
		total_biaya_fs = harga_fitness;
		nama_fs = "Fitness";
	}

	if(status == 'M' || status == 'm'){
		diskon = harga_kamar * 0.1;
	} else {
		diskon = harga_kamar * 0;
	}

	total_biaya_akhir = (harga_kamar * lama_inap) + total_biaya_fs - diskon;

	cout<<"\n";
	//Showing the Result
	cout<<"RESULTS : \n";
	line();
	cout<<"Kelas kamar yang dipakai \t : "<<kelas<<"\n";
	cout<<"Harga kamar per hari  \t\t : Rp."<<harga_kamar<<"\n";
	cout<<"Fasilitas yang dipakai adalah \t : "<<nama_fs<<"\n";
	cout<<"Total biaya fasilitas adalah \t : Rp."<<total_biaya_fs<<"\n";
	cout<<"Lama menginap selama \t\t : "<<lama_inap<<" hari \n";
	cout<<"Diskon sebesar \t\t\t : Rp."<<diskon<<"\n";
	line();
	cout<<"Total biaya Anda adalah \t : "<<total_biaya_akhir<<"\n";
	line();
	return 0;

}

/*
	Copyright 2017 by Ahmad Hanafi | 2017102020 | Teknik Informatika | STMIK CIC
*/
