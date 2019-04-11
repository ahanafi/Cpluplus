/*
	Nama	: Ahmad Hanafi
	NIM		: 2017102020
	Kelas	: TI 1-2

	Jika
		BB >= 100, biaya => 500.000
		BB >= 40,  biaya => 200.000
				   biaya => 50.000
*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void line()
{
	printf("***************************************************************\n");
}

void move() 
{
	printf("\n");
}

void header()
{
	line();
	printf("          PENGIRIMAN BARANG \n");
	line();
}

typedef struct {
	char nama_barang[100];
	int berat_barang;
	int biaya_kirim;
} Barang;


main()
{
	int n;
	char nama[100];
	int tanggal, bulan, tahun = 2018;
	char *nama_bulan;
	Barang brg[100];
	int total_biaya = 0, bayar, kembali;
	char replay;

   lagi:
	header();
	move();

	printf("INPUT DATA :");
	move();
	printf("Masukkan jumlah Data      : ");
	scanf("%d", &n);
	printf("Nama pengirim             : ");
	scanf("%s", &nama);
	printf("Tanggal pengiriman [1-31] : ");
	scanf("%d", &tanggal);
	printf("Bulan pengiriman [1-12]   : ");
	scanf("%d", &bulan);

	move();

	for(int i=0; i<n; i++) {
		printf("Data pengiriman ke        = %d\n", i+1);
		printf("Nama barang yang dikirim  = ");
		scanf("%s", &brg[i].nama_barang);
		printf("Berat barang yang dikirim = ");
		scanf("%d", &brg[i].berat_barang);

		int BB = brg[i].berat_barang;

		if(BB >= 100) {
			brg[i].biaya_kirim = 500000;
		} else if(BB >= 40) {
			brg[i].biaya_kirim = 200000;
		} else {
			brg[i].biaya_kirim = 50000;
		}

		total_biaya = total_biaya + brg[i].biaya_kirim;
      move();
	}

	clrscr();
	line();
	printf("       STRUK PENGIRIMAN BARANG \n");
	printf("           PT. MAJU MUNDUR \n");
	line();
	move();
	printf("Nama Pengirim   = %s\n", nama);
	printf("Tanggal Kirim   = %d-%d-%d\n", tanggal, bulan, tahun);
	line();
	printf("No     Nama Barang       Berat Baang                Biaya Kirim\n");
	line();
	for(int x=0; x<n; x++) {
		printf("%d      %s       %d                %d\n", x+1, brg[x].nama_barang, brg[x].berat_barang, brg[x].biaya_kirim);
	}
	line();
	printf("Total Biaya                                         : %d\n", total_biaya);
	printf("Cash/Uang Bayar                                     : ");
	scanf("%d", &bayar);
	kembali = bayar - total_biaya;
	printf("                                         **********************\n");
	printf("Kembali                                             : %d\n", kembali);
	move();


	printf("Mau isi data lagi ? [Y/T] : ");
	scanf("%s", &replay);
   if(replay == 'Y' || replay == 'y') {
   	clrscr();
   	goto lagi;
   } else {
   	exit(0);
   }

   getch();
}
