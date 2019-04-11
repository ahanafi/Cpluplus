/*
Nama    : Ahmad Hanafi
NIM     : 2017102020
Prodi   : Teknik Informatika
Semester: 2 (Dua)
*/
/*
Menghitung total gaji karyawan dalam sebuah perusahaan
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

main()
{
	int nik;
	int gaji, gaji2;
	const float komisi = 0.15;
	const float pajak = 0.1;
	int askes = 10000, besar_pajak, besar_komisi, bonus = 75000;
	long int total_gaji;
	char nama[100];

	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN \n";
	cout<<"Masukkan Nomor Induk Karwayan : ";
	cin>>nik;
	cout<<"Masukkan Nama Karyawan : ";
	cin>>nama;
	cout<<"Masukkan gaji karyawan : ";
	cin>>gaji;

	besar_komisi = gaji * komisi;
	besar_pajak  = gaji * pajak;
	gaji2        = gaji - (besar_pajak + askes);
	total_gaji   = gaji2 + (besar_komisi + bonus);

/* Output */
	cout<<"\n";
	cout<<"====================================== \n";
	cout<<"Gaji Pokok : "<<gaji<<"\n";
	cout<<"Komisi     : "<<besar_komisi<<"\n";
	cout<<"Pajak      : "<<besar_pajak<<"\n";
	cout<<"Bonus      : "<<bonus<<"\n";
	cout<<"Askes      : "<<askes<<"\n";
	cout<<"====================================== \n";
	cout<<"Total Gaji Karyawan Adalah : Rp."<<total_gaji<<endl;
	cout<<"====================================== \n";

	getch();
}

