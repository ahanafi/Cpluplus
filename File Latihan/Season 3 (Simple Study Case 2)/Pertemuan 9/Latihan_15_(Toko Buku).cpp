/*
	Nama 	: Ahmad Hanafi
   Kelas : TI 1/2
   NIM	: 2017102020

   Menghitung pembelian di Toko Buku

   Kode Buku	Jenis Buku	Harga
   	NV				Novel		20.000
      KM				Komik		15.000
      MJ				Majalah	25.000
      TB				Tabloid	25.000

   Diskon 15% untuk pembelian dengan status Member dan
   membeli dengan jenis buku Majalah
*/

#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <string.h>

void line()
{
	printf("========================================== \n");
}

main()
{
	char nama[100], status;
   char kode[50], *jenis, *ket;
	float harga, jumlah, total;
   float diskon;

   line();
   printf("\t\tTOKO BUKU BB\n");
	line();
   printf("\n");

   printf("Kami Menyediakan : \n");
	line();
   printf("Kode |	Jenis Buku  |	Harga		 | \n");
   line();
   printf(" NV  |	Novel       |	20.000		 | \n");
   printf(" KM  |	Komik       |	15.000		 | \n");
   printf(" MJ  |	Majalah     |	25.000		 | \n");
   printf(" TB  |	Tabloid     |	25.000		 | \n");
   line();
   printf("\n");

   printf("INPUT DATA PEMBELI : \n");
   printf("Masukkan Nama Anda : ");
   	scanf("%s", &nama);
   printf("Pilih Status Anda  : \n");
   printf("  M => Member \n");
   printf("  N => Not-Member \n");
   printf("Status : ");
   	scanf(" %c", &status);
   printf("Masukkan kode jenis buku : ");
   	scanf("%s", &kode);
   printf("Masukkan jumlah buku : ");
	 	scanf("%f", &jumlah);

   if(strcmp(kode, "NV") == 0 || strcmp(kode, "nv" ) == 0){
   	jenis = "Novel";
      harga = 20000;
   } else if(strcmp(kode, "KM") == 0 || strcmp(kode, "km") == 0){
   	jenis = "Komik";
      harga = 15000;
   } else if(strcmp(kode, "MJ") == 0 || strcmp(kode, "mj" ) == 0){
   	jenis = "Majalah";
      harga = 25000;
   } else {
   	jenis = "Tabloid";
      harga = 25000;
   }

   if(status == 'M' && (strcmp(kode, "MJ") == 0)){
   	diskon = harga * 0.15 * jumlah;
      ket = "MEMBER";
   } else {
   	diskon = harga * 0 * jumlah;
      ket = "NOT-MEMBER";
   }

   total = (harga * jumlah) - diskon;

	clrscr();
   line();
   printf("\t\tTOKO BUKU BB\n");
   line();
   printf("Nama        : %s\n", nama);
   printf("Status      : %s\n", ket);
   printf("Jenis buku  : %s\n", jenis);
   printf("Jumlah buku : %2.0f\n", jumlah);
   printf("Harga buku  : %2.0f\n", harga);
   printf("Diskon      : Rp.%2.0f\n", diskon);
   line();
   printf("TOTAL BIAYA : Rp.%2.0f\n", total);

   getch();
}