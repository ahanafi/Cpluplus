/*
	Nama 	: Ahmad Hanafi
   NIM  	: 2017102020
   Prodi : Teknik Informatika
   Semester : 2 (DUA)

   Program Menghitung Total Pembelian belanja,
   akan mendapatkan diskon sebesar 10% jika total belanjanya lebih dari 100rb
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
	char kode_barang[50], nama_barang[100];
   int jumlah_beli;
   const float diskon = 0.1;
   float sub_total, total_bayar, harga_barang, diskon_bayar;

   printf("========================================= \n");
   printf("    PROGRAM MENGHITUNG TOTAL BELANJA      \n");
   printf("========================================= \n");
   printf("\n");

   printf("Masukkan kode barang \t : ");
   scanf("%s", &kode_barang);
   printf("Masukkan nama barang \t : ");
   scanf("%s", &nama_barang);
   printf("Masukkan harga satuan barang : ");
   scanf("%f", &harga_barang);
   printf("Masukkan jumlah beli barang : ");
   scanf("%d", &jumlah_beli);

   sub_total = harga_barang * jumlah_beli;
   if(sub_total > 100000) {
   	diskon_bayar = sub_total * diskon;
   } else {
   	diskon_bayar = sub_total * 0;
   }

   total_bayar = sub_total - diskon_bayar;

   printf("\n \n");
   printf("========================================= \n");
   printf("                KETERANGAN 					  \n");
   printf("========================================= \n");
   printf("Kode Barang \t : %s \n", kode_barang);
   printf("Nama Barang \t : %s \n", nama_barang);
   printf("Harga Barang\t : Rp.%4.0f \n", harga_barang);
   printf("Jumlah beli \t : %d \n", jumlah_beli);
   printf("Sub Total   \t : Rp.%4.0f \n", sub_total);
   printf("Diskon      \t : Rp.%4.0f \n", diskon_bayar);
   printf("========================================= \n");
   printf("TOTAL BAYAR \t : Rp.%4.0f \n", total_bayar);
   printf("========================================= \n");
   getch();

}