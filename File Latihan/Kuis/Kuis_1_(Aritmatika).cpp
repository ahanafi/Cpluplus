/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program Operasi artimatika
   Kurang, tambah, kali, bagi
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>

main()
{
	//Deklarasi variable
   int bil_1, bil_2, bil_3, bil_4, bil_5;
   float bagi, hasil;

   printf("=============================================== \n");
   printf("     PROGRAM SEDERHANA ARITMATIKA BILANGAN		  \n");
   printf("=============================================== \n");
   printf("\n");

   printf("Masukkan bilangan 1 : ");
	   scanf("%d", &bil_1);
   printf("Masukkan bilangan 2 : ");
   	scanf("%d", &bil_2);
   printf("Masukkan bilangan 3 : ");
   	scanf("%d", &bil_3);
   printf("Masukkan bilangan 4 : ");
   	scanf("%d", &bil_4);
   printf("Masukkan bilangan 5 : ");
   	scanf("%d", &bil_5);
   printf("\n");

   clrscr();
	hasil =  (bil_1 + bil_2 - bil_3) * (bil_4) / bil_5;

   printf("Diketahui  : \n");
   printf("\n");
   printf("Bilangan 1 : %d \n", bil_1);
   printf("Bilangan 2 : %d \n", bil_2);
   printf("Bilangan 3 : %d \n", bil_3);
   printf("Bilangan 4 : %d \n", bil_4);
   printf("Bilangan 5 : %d \n", bil_5);
   printf("==================================== \n");
   printf("Hasil : \n");
   printf("<=> BIL_1 + BIL_2 - BIL_3 * BIL_4 / BIL_5 = \n");
   printf("<=> HASIL %2.0f", hasil);
   getch();
}
