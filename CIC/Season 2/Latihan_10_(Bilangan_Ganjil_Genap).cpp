/*
	Nama 	: Ahmad Hanafi
   NIM  	: 2017102020
   Prodi : Teknik Informatika
   Semester : 2 (DUA)

   Program Mengecek bilangan yang diinputkan oleh User
   apakah bilangan ganjil atau bilangan genap.
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

main()
{
	int bilangan;
   char* ket;

   printf("========================================== \n");
   printf("    PROGRAM MENGECEK INPUTAN BILANGAN      \n");
   printf("========================================== \n");
   printf("\n");

   printf("Masukkan bilangan : ");
   scanf("%d", &bilangan);

   if(bilangan % 2 == 0) {
	   ket = "GENAP";
   } else {
	   ket = "GANJIL";
   }

   printf("Bilangan yang Anda masukkan adalah BILANGAN %s \n", ket);
   getch();
}
                                                 