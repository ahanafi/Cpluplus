/*
	Nama 	: Ahmad Hanafi
   NIM  	: 2017102020
   Prodi : Teknik Informatika
   Semester : 2 (DUA)

   Program Menghitung Kelulusan Mahasiswa dengan minimal nilai_akhir adalah 60
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main()
{
	string nama, keterangan;
	int nim;
	float nilai_akhir;

	cout<<"================================================ \n";
	cout<<"     PROGRAM MENGHITUNG KELULUSAN MAHASISWA      \n";
	cout<<"================================================ \n";
	cout<<"\n";

	cout<<"Masukkan Nama Anda \t : ";
	cin>>nama;
	cout<<"Masukkan NIM Anda \t : ";
	cin>>nim;
	cout<<"Masukkan Nilai Akhir \t : ";
	cin>>nilai_akhir;

	cout<<"\n";
	cout<<"================================================ \n";
	cout<<"                     HASIL                       \n";
	cout<<"================================================ \n";
	cout<<"Nama		\t : "<<nama<<endl;
	cout<<"NIM	  	 \t : "<<nim<<endl;
	cout<<"Nilai Akhir \t \t : "<<nilai_akhir<<endl;

	if(nilai_akhir >= 60 ) {
		cout<<"Keterangan 	\t : LULUS \n";
	} else {
		cout<<"Keterangan 	\t : TIDAK LULUS \n";
	}
	cout<<"================================================ \n";

	getch();

}
