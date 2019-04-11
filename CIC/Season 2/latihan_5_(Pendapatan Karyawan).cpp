/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)
*/
/*
    Menghitung total gaji karyawan dalam sebuah perusahaan
*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main()
{
	int nik;
   int gaji, gaji2;
   const float komisi = 0.15;
   const float pajak = 0.1;
   int askes = 10000, besar_pajak, besar_komisi, bonus = 75000;
   float total_gaji;
   char nama[100];

   printf("PROGRAM MENGHITUNG GAJI KARYAWAN \n");
   printf("Masukkan Nomor Induk Karwayan : ");
   scanf("%d", &nik);
   printf("Masukkan Nama Karyawan : ");
   scanf("%s", &nama);
   printf("Masukkan gaji karyawan : ");
   scanf("%d", &gaji);

   	besar_komisi = gaji * komisi;
      besar_pajak  = gaji * pajak;
      gaji2        = gaji - (besar_pajak + askes);
      total_gaji   = gaji2 + (besar_komisi + bonus);

   /* Output */
   printf("\n");
   printf("====================================== \n");
   printf("Gaji Pokok : %d \n", gaji);
   printf("Komisi     : %d \n", besar_komisi);
   printf("Pajak      : %d \n", besar_pajak);
   printf("Bonus      : %d \n", bonus);
   printf("Askes      : %d \n", askes);
   printf("====================================== \n");
   printf("Total Gaji Karyawan Adalah : Rp. %2.0f", total_gaji);
   printf("====================================== \n");

   getch();
}

