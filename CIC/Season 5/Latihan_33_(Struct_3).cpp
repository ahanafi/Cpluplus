/*
	Nama	: Ahmad Hanafi
   NIM	: 2017102020
   Kelas	: TI 1-2

   STRUCT 3 (ARRAY)
*/

#include <stdio.h>
#include <conio.h>

typedef struct {
	char nim[20], nama[100];
   float nilai;
} Mahasiswa[5];

void garis()
{
	printf("================================ \n");
}

main()
{
	Mahasiswa mhs;
	clrscr();
   garis();
	for(int i=0; i<2; i++)
   {
   	printf("INPUT DATA KE-%d \n", i+1);
      garis();
   	printf("Masukkan NIM   : ");
      	scanf("%s", &mhs[i].nim);

      printf("Masukkan Nama  : ");
      	scanf("%s", &mhs[i].nama);

      printf("Masukkan Nilai : ");
      	scanf("%f", &mhs[i].nilai);
		garis();
   }

   clrscr();
   garis();
   for(int j=0; j<2; j++)
   {
   	printf("OUTPUT DATA KE-%d \n", j+1);
      garis();
      printf("NIM     : %s \n", mhs[j].nim);
      printf("Nama    : %s \n", mhs[j].nama);
      printf("Nilai   : %4.2f \n", mhs[j].nilai);
      printf("\n");
      garis();
   }

	getch();
}
