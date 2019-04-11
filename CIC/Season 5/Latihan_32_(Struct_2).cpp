/*
	Nama	: Ahmad Hanafi
   NIM	: 2017102020
   Kelas	: TI 1-2

   STRUCT 2
*/

#include <stdio.h>
#include <conio.h>

typedef struct {
	char nim[20];
   char nama[100];
} Mahasiswa;

typedef struct {
	float uts, uas;
} Nilai;

typedef struct {
	Mahasiswa mhs;
   Nilai nil;
} Data;

void garis()
{
	printf("================================ \n");
}

main()
{
	Data data;
	clrscr();
   garis();
   printf("INPUT DATA : \n");
   garis();

   printf("Masukkan NIM  : ");
   	scanf("%s", &data.mhs.nim);

   printf("Masukkan Nama : ");
   	scanf("%s", &data.mhs.nama);

   printf("Masukkan Nilai UTS : ");
   	scanf("%f", &data.nil.uts);

   printf("Masukkan Nilai UAS : ");
   	scanf("%f", &data.nil.uas);

   printf("\n");
   garis();
   printf("OUTPUT DATA : \n");
   garis();
   printf("NIM     : %s \n", data.mhs.nim);
   printf("Nama    : %s \n", data.mhs.nama);
   garis();
   printf("Nilai   : \n");
   printf("UTS     : %4.2f \n", data.nil.uts);
   printf("UAS     : %4.2f \n", data.nil.uas);

	getch();
}
