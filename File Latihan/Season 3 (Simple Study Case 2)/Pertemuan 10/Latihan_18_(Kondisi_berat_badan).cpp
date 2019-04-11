/*
	Nama 	: Ahmad Hanafi
	NIM		: 2017102020
	Kelas	: TI 1-2

	Hitung berat badan ideal

	Input => Tinggi (cm) dan Berat (kg)
	BB Ideal => (100 - tinggi) * 90%;

	- Kurus => 10% lebih kecil dari berat badan ideal
	- Normal => tidak kurang / lebih dari 10% berat badan ideal
	- Kelebihan => 10% sampai 20% lebih dari berat badan ideal

	Ex : T = 50cm, berat 40kg
		Ideal => (100 - 50 ) * 0.9
			  => 50 * 0.9
			  => 45
		Kategori => KURUS (40 lebih kecil 10%  dari 45)
					      (40 < 4.5)
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
	printf("         MENENTUKAN KONDISI BERAT BADAN \n");
	line();
	printf("\n");
}

main() {
	float berat, tinggi, ideal, ideal2;
	char* ket;
   char jk;

	header();

	printf("INPUT DATA : \n");
	printf("Masukan tinggi badan (cm) : ");
		scanf("%f", &tinggi);

	printf("Masukan berat badan (kg)  : ");
		scanf("%f", &berat);

   printf("Pilih jenis kelamin [L/P] : ");
   	scanf(" %c", &jk);

   if(jk == 'L' || jk == 'l') {
   	ideal = (tinggi - 100) - (0.15 * (tinggi - 100));
   } else {
   	ideal = (tinggi - 100) - (0.10 * (tinggi - 100));
   }

   ideal2 = ideal - (0.1 * ideal);

   if(berat < ideal2) {
   	ket = "KURUS";
   } else if(berat == ideal2) {
   	ket = "NORMAL";
   } else {
   	ket = "GEMUK";
   }

   printf("Anda %s", ket);


	getch();
}