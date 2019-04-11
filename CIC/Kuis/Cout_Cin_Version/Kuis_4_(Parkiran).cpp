/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program mencari Biaya parkir
   This program created in Codeblocks
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

main()
{
    int jam_masuk, jam_keluar, lama_parkir, total_bayar, lebihan, lama;
    const int max_lama = 12;

    cout<<"========================================== \n";
    cout<<"            PROGRAM BIAYA PARKIR           \n";
    cout<<"========================================== \n";
    cout<<"\n";

    cout<<"Masukkan jam masuk : ";
        cin>>jam_masuk;
    cout<<"Masukkan jam keluar : ";
        cin>>jam_keluar;

    if(jam_masuk > jam_keluar) {
        jam_keluar = jam_keluar + 12;
    }

    lama_parkir = jam_keluar - jam_masuk;
    lebihan = lama_parkir - 2;

    if(jam_keluar > 12){
        jam_keluar = jam_keluar - 12;
    }

    if(lama_parkir <= 2) {
        total_bayar = 2000;
    } else {
        total_bayar = 2000 + (lebihan * 500);
    }

    cout<<"\n";
    cout<<"========================================== \n";
    cout<<"HASIL \n";
    cout<<"========================================== \n";
    cout<<"Jam Masuk \t : "<<jam_masuk<<"\n";
    cout<<"Jam Keluar \t : "<<jam_keluar<<"\n";
    cout<<"Lama parkir \t : "<<lama_parkir<<" jam \n";
    cout<<"Biaya parkir \t : "<<total_bayar<<"\n";

}
