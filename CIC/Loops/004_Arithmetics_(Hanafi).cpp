/*
   Nama  : Ahmad Hanafi
   NIM   : 2017102020
   Kelas : TI - 1/2
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

//SHOW LINES
void line()
{
   printf("==================================== \n");
}

//FUNCTION TO SHOW HEADER
void showHeader()
{
   line();
   printf("      SIMPLE PROGRAM SELECTION \n");
   line();
   printf("\n");
}

//FUNCTION TO SHOW LIST MENU
void ListMenu()
{
   printf("MENU : \n");
   line();
   printf("  Kode |    Operasi Aritmatika     | \n");
   line();
   printf("   1   |    PENJUMLAHAN (+)        | \n");
   printf("   2   |    PENGURANGAN (-)        | \n");
   printf("   3   |    PERKALIAN   (x)        | \n");
   printf("   4   |    PEMBAGIAN   (/)        | \n");
   line();
   printf("\n");
}

//MAIN FUNCTION
void Arithmetics()
{
	float bil_a, bil_b;
   int kode;
   char *sign, replay;
   float hasil;
   char* ket;

   do{
      clrscr();
      showHeader();
	   ListMenu();
      //INPUT SELECTION MENU AND VALIDATE INPUT MENU
   	do{
      	printf("Masukkan kode menu [1/2/3/4] : ");
   	   scanf("%d", &kode);
         if(kode > 4 || kode <= 0) {
   	      printf("\n");
         	printf("\aKODE YANG ANDA MASUKAN SALAH!!!\n");
            printf("\n");
         }
      }while(kode > 4 || kode <= 0);

   	//INPUT NUMBER
      clrscr();
      printf("Masukkan Bil. A = ");
      	scanf("%f", &bil_a);
      printf("Masukkan Bil. B = ");
      	scanf("%f", &bil_b);

      //SELECT THE OPERATION
      if(kode == 1) {
      	hasil = bil_a + bil_b;
         ket = "Penjumlahan";
         sign = "+";
      } else if(kode == 2) {
       	hasil = bil_a - bil_b;
         ket = "Pengurangan";
         sign = "-";
      } else if(kode == 3) {
       	hasil = bil_a * bil_b;
         ket = "Perkalian";
         sign = "x";
      } else {
       	hasil = bil_a / bil_b;
         ket = "Pembagian";
         sign = "/";
      }

      clrscr();
      line();
   	printf("DIKETAHUI : \n");
      printf("BIL_A     : %2.0f \n", bil_a);
      printf("BIL_B     : %2.0f \n", bil_b);
      printf("Operasi   : %s\n", ket);
      printf("HITUNG    : %2.0f %s %2.0f = %2.1f \n", bil_a, sign, bil_b, hasil);
      line();

      //ASK TO REPLAY
      printf("\n");
      printf("Apakah Anda mau mengulang ? [Y/T] : ");
      scanf(" %c", &replay);
   }while(replay == 'Y' || replay == 'y');

   clrscr();
   printf("TERIMA KASIH! \n");
   printf("Silahkan tekan [ENTER] untuk keluar program!\n");

   getch();
}
