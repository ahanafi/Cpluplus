/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program mencari Usia
*/

#include <conio.h>
#include <stdio.h>
#include <iostream.h>

main()
{
	char nama[100];
	int tahun_lahir, usia;
   char* ket;
   const int tahun_sekarang = 2018;

   printf("================================================ \n");
   printf("        PROGRAM MENCARI USIA SESORANG				\n");
   printf("================================================ \n");
   printf("\n");

   printf("Masukkan Nama Anda : ");
   	scanf("%s", &nama);
   printf("Masukkan Tahun Lahir : ");
   	scanf("%d", &tahun_lahir);

	usia = 2018 - tahun_lahir;
   printf("\n");
   printf("HASIL : \n");
   printf("Nama \t : %s \n", nama);
   printf("Usia \t : %d tahun \n", usia);
   if(usia < 17) {
   	printf("Anda belum cukup dewasa ");
   }
   getch();

}