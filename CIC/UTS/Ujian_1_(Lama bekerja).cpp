/*
	Nama	: Ahmad Hanafi
   Kelas : TI 1-2

	Program menentukan lama bekerja seorang pegawai
*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main()
{
	char nama[100];
   int nip;
   int jam_masuk, jam_keluar;
   int lama;

   printf("================================= \n");
   printf("  	  PROGRAM LAMA KERJA          \n");
   printf("================================= \n");
   printf("\n");

   printf("INPUT : \n");
   printf("Masukkan NIP \t   : ");
   	scanf("%d", &nip);
   printf("Masukkan Nama Anda : ");
   	scanf("%s", &nama);
   printf("Masukkan jam masuk : ");
   	scanf("%d", &jam_masuk);
   printf("Masukkan jam keluar : ");
   	scanf("%d", &jam_keluar);

   if(jam_keluar < jam_masuk){
   	jam_keluar = jam_keluar + 12;
   }

   lama = jam_keluar - jam_masuk;

   clrscr();
   if(jam_keluar > jam_masuk) {
	   jam_keluar = jam_keluar - 12;
   }
   printf("====================== \n");  
   printf("HASIL : \n");
   printf("====================== \n");
   printf("NIP \t \t : %d \n", nip);
   printf("Nama \t \t : %s \n", nama);
   printf("Jam Masuk \t : %d \n", jam_masuk);
   printf("Jam Keluar \t : %d \n", jam_keluar);
   printf("Lama bekerja \t : %d jam \n", lama);

   getch();
}