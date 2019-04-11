                                                                                   /*
	SOAL : 	"Biro TI-Tour membuat aturan untuk wisata group sebagai berikut :
	=============================================================================
	|	   Tujuan		|	Kode	|	Batas Min. Peserta	| Biaya /peserta	|
	=============================================================================
	|	Pangandaran		|	PA		|			100			|	Rp150.000,-		|
	|	Borobudur		|	BO		|			85				|	Rp100.000,-		|
	|		TMII			|	TM		|			50				|	Rp80.000,-		|
	=============================================================================

	- Input 	=> Kode tujuan, jumlah peserta
	- Proses 	=> Lihat data di table
	- Ketentuan	=> Jika jumlah peserta dibawah batas minimal, maka biaya
				   ditambah biaya extra 15% dari biaya di atas
	- Output	=> Total harga
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void line()
{
	printf("===========================================================================\n");
}

void data_table()
{
	line();
	printf("| Tujuan \t  |	Kode \t | Batas Min. Peserta \t | Biaya /peserta |\n");
	line();
	printf("| Pangandaran \t  |	PA \t |  100 \t \t | Rp150.000,-    |\n");
	printf("| Borobudur \t  |	BO \t |  85 \t \t \t | Rp100.000,-    |\n");
	printf("| TMII	 \t  |	TM \t |  50	 \t \t | Rp80.000,-     |\n");
	line();
	printf("\n");
}

main()
{
	char kode[10];
   char* nama_tujuan;
	int jum_peserta, min_peserta, biaya_per_peserta, biaya_extra, biaya_total;


	printf("\n");
	line();
	printf("\t \t \t SELAMAT DATANG DI TI - TOUR \t \t \n");
	line();
	printf("\n");
	printf("DATA TUJUAN : \n");
	data_table();

	printf("Masukkan kode tujuan tour Anda disini : ");
	scanf("%s", &kode);

	if(strcmp(kode, "PA") == 0 || strcmp(kode, "pa") == 0){
        min_peserta = 100;
        nama_tujuan = "Pangandaran";
        biaya_per_peserta = 150000;
	} else if(strcmp(kode, "BO") == 0 || strcmp(kode, "bo") == 0){
		min_peserta = 85;
        nama_tujuan = "Borobudur";
        biaya_per_peserta = 100000;
	} else {
        min_peserta = 50;
        nama_tujuan = "TMII";
        biaya_per_peserta = 80000;
	}

	printf("Masukkan jumlah peserta tour : ");
	scanf("%d", &jum_peserta);

	if(jum_peserta < min_peserta){
		biaya_extra = (biaya_per_peserta * 15) / 100;
	} else {
		biaya_extra = 0;
	}

	biaya_total = (jum_peserta * biaya_per_peserta) + biaya_extra;

	printf("\n");
	printf("HASIL : \n");
	line();
	printf("Tujuan tour yang Anda pilih adalah \t : %s \n", nama_tujuan);
	printf("Biaya per peserta adalah \t \t : %d\n", biaya_per_peserta);
	printf("Jumlah peserta yang ikut tour adalah \t : %d\n", jum_peserta);
	printf("Biaya extra peserta adalah 	\t : %d\n", biaya_extra);
	printf("Biaya total yang harus dibayar adalah \t : %d\n", biaya_total);
	line();

	getch();

}

/*
	Copyright 2017 - Ahmad Hanafi
*/
