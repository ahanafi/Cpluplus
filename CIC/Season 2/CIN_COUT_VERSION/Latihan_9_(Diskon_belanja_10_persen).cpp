/*
	Nama 	: Ahmad Hanafi
   NIM  	: 2017102020
   Prodi : Teknik Informatika
   Semester : 2 (DUA)

   Program Menghitung Total Pembelian belanja,
   akan mendapatkan diskon sebesar 10% jika total belanjanya lebih dari 100rb
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main()
{
	string kode_barang, nama_barang;
   int jumlah_beli;
   const float diskon = 0.1;
   long int sub_total, total_bayar, harga_barang, diskon_bayar;

   cout<<"========================================= \n";
   cout<<"    PROGRAM MENGHITUNG TOTAL BELANJA      \n";
   cout<<"========================================= \n";
   cout<<"\n";

   cout<<"Masukkan kode barang \t : ";
   cin>>kode_barang;
   cout<<"Masukkan nama barang \t : ";
   cin>>nama_barang;
   cout<<"Masukkan harga satuan barang : ";
   cin>>harga_barang;
   cout<<"Masukkan jumlah beli barang : ";
   cin>>jumlah_beli;

   sub_total = harga_barang * jumlah_beli;
   if(sub_total > 100000) {
   	diskon_bayar = sub_total * diskon;
   } else {
   	diskon_bayar = sub_total * 0;
   }

   total_bayar = sub_total - diskon_bayar;

   cout<<"\n \n";
   cout<<"========================================= \n";
   cout<<"                KETERANGAN 					  \n";
   cout<<"========================================= \n";
   cout<<"Kode Barang \t : "<<kode_barang<<endl;
   cout<<"Nama Barang \t : "<<nama_barang<<endl;
   cout<<"Harga Barang\t : Rp."<<harga_barang<<endl;
   cout<<"Jumlah beli \t : "<<jumlah_beli<<endl;
   cout<<"Sub Total   \t : Rp."<<sub_total<<endl;
   cout<<"Diskon      \t : Rp."<<diskon_bayar<<endl;
   cout<<"========================================= \n";
   cout<<"TOTAL BAYAR \t : Rp."<<total_bayar<<endl;
   cout<<"========================================= \n";
   getch();

}
