/*
	Nama 	: Ahmad Hanafi
   NIM	: 2017102020
   Kelas : TI 1/2

   Program total penghasilan salesman
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
	char nama[100];
   int nip;
   const int tahun_skrg = 2018;
   int tahun_masuk, lama_kerja;
   char status, *ket;
   int target = 30000000, omzet;
   int tunjangan, insentif, bonus;
	const int bpjs = 18934, transport = 150000, pph = 75900;
   int total_penghasilan;

   printf("============================================= \n");
   printf("   PROGRAM MENGHITUNG PENGHASILAN SALESMAN    \n");
   printf("============================================= \n");
   printf("\n");

   printf("Masukkan Nama : ");
   	scanf("%s", &nama);

   printf("Masukkan NIP : ");
   	scanf("%d", &nip);

   printf("Masukan tahun masuk kerja : ");
   	scanf("%d", &tahun_masuk);

   printf("Masukan status nikah \n");
   printf("\t M => Menikah \n");
   printf("\t L => Lajang  \n");
   printf("Staus : ");
   	scanf(" %c", &status);

   printf("Masukkan omzet penjualan : ");
   	scanf("%d", &omzet);

	lama_kerja = tahun_skrg - tahun_masuk;

   if(lama_kerja > 3 && (status == 'm' || status == 'M')){
   	tunjangan = 200000;
      ket = "MENIKAH";
   } else {
   	tunjangan = 0;
      ket = "LAJANG";
   }

   if(omzet > target) {
   	insentif = omzet * 0.1;
      bonus = 250000;
   } else {
   	insentif = omzet * 0;
      bonus = 0;
   }

   total_penghasilan = (omzet + tunjangan + bonus + insentif) - (bpjs + transport + pph);

   clrscr();

   printf("=================================== \n");
   printf("HASIL REKAP : \n");
   printf("=================================== \n");
   printf("NIP	\t : %d \n", nip);
   printf("Nama \t \t : %s \n", nama);
   printf("Status \t \t : %s \n", ket);
   printf("Lama kerja \t : %d tahun \n", lama_kerja);
   printf("Omzet \t \t : %d \n", omzet);
   printf("Insentif \t : %d \n", insentif);
   printf("Bonus \t \t : %d \n", bonus);
   printf("BPJS \t \t : %d \n", bpjs);
   printf("Transport \t : %d \n", transport);
   printf("PPh \t \t : %d \n", pph);
   printf("=================================== \n");
   printf("TOTAL \t \t : %d \n", total_penghasilan);

   getch(); 

}