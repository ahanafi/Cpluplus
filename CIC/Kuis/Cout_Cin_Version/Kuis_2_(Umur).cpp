/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program mencari Usia

   This program created in Codeblocks
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

main()
{
    string nama;
    int tahun_lahir, usia;
    const int tahun_sekarang = 2018;

    cout<<"========================================== \n";
    cout<<"            PROGRAM MENCARI UMUR           \n";
    cout<<"========================================== \n";
    cout<<"\n";

    cout<<"Masukkan Nama Anda : ";
        cin>>nama;
    cout<<"Masukkan Tahun Lahir Anda : ";
        cin>>tahun_lahir;

    usia = tahun_sekarang - tahun_lahir;
    cout<<"\n"<<endl;
    cout<<"Hasil : \n";
    cout<<"========================================== \n";
    cout<<"Nama \t : "<<nama<<"\n";
    cout<<"Tahun Lahir : "<<tahun_lahir<<"\n";
    cout<<"Usia saat ini : "<<usia<<" tahun \n";

    if(usia < 17) {
        cout<<"Anda belum cukup dewasa";
    }



}
