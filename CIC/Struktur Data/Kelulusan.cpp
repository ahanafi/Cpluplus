/*
	Algoritma Menentukan_nilai_kelulusan

   #DEKLARASI
   	integer nilai
      string ket
      char ulang

   #DESKRIPSI
   	do
	   	write('Masukkan nilai Anda : ')
   	   read(nilai)

      	if(nilai >= 60)then
      		ket<-'Lulus'
      	else
      		ket<-'Tidak Lulus'
	      endif

   	   write('Anda ', ket)

         write('Apakah ingin mengulang ? [Y/T] : ')
         read(ulang)
      while(ulang = 'Y' OR ulang = 'y')



*/


#include <conio.h>
#include <stdio.h>

main()
{
	int nilai;
   char* ket;
   char ulang;

   do{
   	clrscr();
	   printf("Masukkan nilai Anda : ");
   		scanf("%d", &nilai);

	   if(nilai >= 60){
   		ket = "Lulus";
	   } else {
   		ket = "Tidak Lulus";
		}

	   printf("Anda %s \n", ket);

      printf("Apakah Anda mau mengulang ? [Y/T] : ");
      	scanf(" %c", &ulang);
   }while(ulang == 'Y' || ulang == 'y');

   getch();
}

