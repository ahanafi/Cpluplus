/*
	Nama	: Ahmad Hanafi
   NIM	: 2017102020
   Kelas	: TI 1-2

   STRUCT 1

*/

#include <stdio.h>
#include <conio.h>

typedef struct {
	char nim[20];
   char nama[100];
   float nilai;
} Mahasiswa;

main()
{
   Mahasiswa mhs;
	clrscr();
   printf("========================= \n");
   printf("INPUT DATA : \n");
   printf("========================= \n");

   printf("Masukkan NIM   : ");
   	scanf("%s", &mhs.nim);
   printf("Masukkan Nama  : ");
   	scanf("%s", &mhs.nama);
   printf("Masukkan Nilai : ");
   	scanf("%f", &mhs.nilai);

   clrscr();
   printf("========================= \n");
   printf("OUTPUT DATA : \n");
   printf("========================= \n");
   printf("NIM   : %s \n", mhs.nim);
   printf("Nama  : %s \n", mhs.nama);
   printf("Nilai : %4.2f \n", mhs.nilai);

   getch();
}