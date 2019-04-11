/*
	Nama	: Ahmad Hanafi
	NIM		: 2017102020
	Kelas	: TI 1-2

	BUat program untuk menghitung nilai IPK mahasiswa dan berikan penilaian :
	> 3.5 - 4.0 --> Dengan Pujian
	> 3.0 - 3.4 --> Sangat Memuaskan
	> 2.5 - 2.9 --> Memuaskan
	> 2.0 - 2.4 --> Cukup

*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main()
{
	float nilaiMutu, totalSKS, IP;
   char *KET;
   char replay;

   do{
   	clrscr();
		printf("========================================\n");
		printf("     PROGRAM MENGHITUNG NILAI IPK\n");
		printf("========================================\n");
		printf("\n");

		printf("Masukkan total SKS        : ");
		scanf("%f", &totalSKS);

		printf("Masukkan total nilai mutu : ");
		scanf("%f", &nilaiMutu);

		IP = (nilaiMutu / totalSKS);

		if(IP >= 3.5 || IP == 4.0) {
   		KET = "DENGAN PUJIAN";
	   } else if(IP >= 3.0 && IP <= 3.4) {
   		KET = "SANGAT MEMUASKAN";
	   } else if(IP >= 2.5 && IP <= 2.9) {
   		KET = "MEMUASKAN";
	   } else if(IP >= 2.0) {
   		KET = "CUKUP";
	   } else {
   		KET = "TIDAK LULUS";
	   }

		clrscr();
	   printf("======================= \n");
   	printf("        HASIL\n");
		printf("======================= \n");
   	printf("IPK        : %2.2f \n", IP);
	   printf("Keterangan : %s\n", KET);
      printf("======================= \n");

      printf("Mau isi data lagi ? [Y/T] : ");
      scanf("%s", &replay);
   } while(replay == 'Y' || replay == 'y');

   getch();

}