/*
	Nama 	: Ahmad Hanafi
   NIM  	: 2017102020
   Prodi : Teknik Informatika
   Semester : 2 (DUA)

   Program Menghitung Kelulusan Mahasiswa dengan minimal nilai_akhir adalah 60
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
	char nama[100], keterangan[50];
   int nim;
   float nilai_akhir;

   printf("================================================ \n");
   printf("     PROGRAM MENGHITUNG KELULUSAN MAHASISWA      \n");
	printf("================================================ \n");
   printf("\n");

   printf("Masukkan Nama Anda \t : ");
   scanf("%s", &nama);
   printf("Masukkan NIM Anda \t : ");
   scanf("%d", &nim);
   printf("Masukkan Nilai Akhir \t : ");
   scanf("%f", &nilai_akhir);

	printf("\n");
	printf("================================================ \n");
   printf("                     HASIL                       \n");
  	printf("================================================ \n");
   printf("Nama		\t : %s\n", nama);
   printf("NIM	  	 \t : %d\n", nim);
   printf("Nilai Akhir \t \t : %4.0f \n", nilai_akhir);

   if(nilai_akhir >= 60 ) {
   	printf("Keterangan 	\t : LULUS \n");
   } else {
		printf("Keterangan 	\t : TIDAK LULUS \n");
   }
   printf("================================================ \n");

   getch();

}
