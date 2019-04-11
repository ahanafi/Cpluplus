/*
	Nama 	: Ahmad Hanafi
   Kelas	: TI 1-2
   NIM	: 2017102020

   SOAL ;
   	Buatlah algoritma dan program, untuk menghitung total bus yang dibutuhkan
      untuk penumpang dalam perjalanan wisata. 1 bus hanya memuat untuk 7 orang.
   	Contoh inputan :
			Jumlah_Penumpang	|	Jumlah_Bus
         	5					| 		1
            8					|		1
            10					|		2
            24					|		4
*/
/*
	JAWAB :

   Algoritma Menghitung_jml_bus

   #DEKLARASI
		int jum_penumpang, jum_bus;

   #DESKRIPSI
   	write('Masukkan jumlah penumpang : ')
      read(jum_penumpang)

      if( jum_penumpang MOD 7 <- 0 ) then
      	jum_bus <- jum_penumpang / 7
      else
	      jum_bus <- (jum_penumpang / 7) + 1
      endif

      write('Jumlah bus yang dibutuhkan adalah ', jum_bus)
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
	int jum_penumpang, jum_mobil;
   char replay;

   do {
	   printf("Masukkan jumlah penumpang : ");
   	scanf("%d", &jum_penumpang);

	   if( jum_penumpang % 7 == 0){
   		jum_mobil = jum_penumpang / 7;
	   } else {
   		jum_mobil = (jum_penumpang / 7 ) + 1;
	   }

   	printf("Jumlah mobil yang dibutuhkan untuk %d orang adalah %d bus", jum_penumpang, jum_mobil);
      printf("\n");
      printf("Ingin mengulang ? [Y/T] : ");
      scanf(" %c", &replay);

      printf("\n======================================= \n");
   }while(replay == 'Y' || replay == 'y');
   getch();
}
