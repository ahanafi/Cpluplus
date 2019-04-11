/*
	Nama 	: Ahmad Hanafi
	NIM		: 2017102020
	Kelas	: TI 1-2

	Total Bayar Foto Copy
	- Konsumen member dan fotocopy >= 100 lembar, harga fc 75 / lembar
	- Konsumen member dan fotocopy < 100 lembar, harga fc 100 / lembar
	- Konsumen !member dan fotocopy >= 100 lembar, harga fc 100 / lembar
	- Konsumen !member dan fotocopy < 100 lembar, harga fc 200 / lembar
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void line() {
	printf("================================================== \n");
}

void header() {
	line();
	printf("             MEDIA FOTO COPY BERSAMA \n");
	line();
	printf("\n");
}

main() {
	char status, *ket;
	int hrg_fc, total, jml_fc;

	header();

	printf("INPUT DATA : \n");
	printf("Masukkan status Anda : \n");
	printf("  M => Member \n");
	printf("  N => Non-Member \n");
	printf("Kode status : ");
		scanf("%s", &status);

	printf("Masukkan jumlah lembar fotocopy : ");
		scanf("%d", &jml_fc);

	if(status == 'M' || status == 'm') {
		ket = "Member";
		if(jml_fc >= 100) {
			hrg_fc = 75;
		} else {
			hrg_fc = 100;
		}
	} else {
		ket = "Non-Member";
		if(jml_fc >= 100) {
			hrg_fc = 100;
		} else {
			hrg_fc = 200;
		}
	}

	total = hrg_fc * jml_fc;

	clrscr();
	header();

	printf("OUTPUT DATA : \n");
	line();
	printf("Status           : %s \n", ket);
	printf("Harga per lembar : Rp %d \n", hrg_fc);
	printf("Jumlah fotocopy  : %d lembar \n", jml_fc);
	line();
	printf("Total Biaya      : Rp %d \n", total);

	getch();
}