/*
	Nama	: Ahmad Hanafi
   Kelas	: TI 1 - 2
   Prodi : Teknik Informatika
   NIM	: 2017102020

   Progaram Nested IF memilih kelas
   Kode kelas		| Nama Kelas
   	P				| Pagi
      S           | Siang
      SR          | Sore
      M           | Malam
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char kode[5];
   int num_kode;
   char* ket;

   printf("====================================== \n");
   printf(" 	PROGRAM MENENTUKAN NAMA KELAS 	  \n");
   printf("====================================== \n");
   printf("\n");

   printf("====================================== \n");
   printf("| KODE  |	NAMA KELAS          \n");
   printf("====================================== \n");
   printf("|  P	|	PAGI				  \n");
   printf("|  S	|	SIANG				  \n");
   printf("|  SR	|	SORE				  \n");
   printf("|  M	|	MALAM				  \n");
   printf("====================================== \n");
   printf("\n");

   printf("Masukkan kode kelas Anda : ");
   scanf("%s", &kode);

   if(strcmp(kode, "P") == 0 || strcmp(kode, "p") == 0){
   	ket = "PAGI";
      num_kode = 1;
   } else if(strcmp(kode, "S") == 0 || strcmp(kode, "s") == 0){
   	ket = "SIANG";
      num_kode = 2;
   } else if(strcmp(kode, "SR") == 0 || strcmp(kode, "sr") == 0){
		ket = "SORE";
      num_kode = 2;
   } else if(strcmp(kode, "M") == 0 || strcmp(kode, "m") == 0) {
   	ket = "MALAM";
      num_kode = 4;
   } else {
   	ket = "KODE YANG DIMASUKKAN SALAH!";
   }

   if(num_kode > 0 && num_kode <= 4 ) {
	   printf("Anda berada di kelas %s", ket);
   } else {
   	clrscr();
      system("color 4f");
   	printf("%s", ket);
   }
   getch();

}