/*
	Nama 	: Ahmad Hanafi
   Kelas	: TI 1/2
   NIM	: 2017102020
*/

#include <stdio.h>
#include <conio.h>

main()
{
	char nama[100], status, *ket, nip[100];
   int gol, jam_lembur, jam_kerja;
   int gabur, gaber, gapok;
   int tunjangan, pajak;

   printf("================================== \n");
   printf("          ENJOY MART	    			 \n");
   printf("================================== \n");
   printf("\n");

   printf("================================== \n");
   printf(" KODE |\tGAJI POKOK\t\t | \n");
   printf("================================== \n");
   printf("  1   |\t3.000.000\t\t | \n");
   printf("  2   |\t2.000.000\t\t | \n");
   printf("  3   |\t1.500.000\t\t | \n");
   printf("================================== \n");
	printf("\n");

   printf("================================== \n");
   printf(" STATUS  | TUNJANGAN\t\t | \n");
   printf("================================== \n");
   printf(" MENIKAH | 500.000\t\t | \n");
   printf(" LAJANG  | 300.000\t\t | \n");
   printf("================================== \n");
   printf("\n");

   printf("INPUT DATA : \n");
   printf("Masukkan NIP  : ");
   	scanf("%s", &nip);
   printf("Masukkan Nama : ");
   	scanf("%s", &nama);
   printf("Masukkan kode golongan : ");
   	scanf("%d", &gol);
   printf("Msukkan status : \n");
   printf("  M => Menikah \n");
   printf("  L => Lajang  \n");
   printf("Status : ");
   	scanf(" %c", &status);
   printf("Masukkan lama jam kerja (/bln) : ");
   	scanf("%d", &jam_kerja);

   if(gol == 1) {
   	gapok = 3000000;
   } else if(gol == 2) {
   	gapok = 2000000;
   } else {
   	gapok = 1500000;
   }

   if(status == 'M' || status == 'm') {
   	tunjangan = 500000;
      ket = "MENIKAH";
   } else {
   	tunjangan = 300000;
      ket = "LAJANG";
   }

   if(jam_kerja > 200) {
		jam_lembur = jam_kerja - 200;
   } else {
   	jam_lembur = 0;
   }

   gabur = jam_lembur * 20000;
   pajak = gapok * 0.1;

   gaber = (gapok + tunjangan + gabur) - (pajak);

	clrscr();
   printf("================================== \n");
   printf("              REKAP					 \n");
   printf("================================== \n");
   printf(" NIP        : %s \n", nip);
   printf(" Nama       : %s \n", nama);
   printf(" Gol        : %d \n", gol);
   printf(" Status     : %s \n", ket);
   printf(" Jam kerja  : %d \n", jam_kerja);
   printf(" Jam lembur : %d \n", jam_lembur);
   printf(" Tunjangan  : %d \n", tunjangan);
   printf(" Besar Pajak: %d \n", pajak);
   printf("================================== \n");
   printf(" TOTAL GAJI : %d \n", gaber);







   getch();
}