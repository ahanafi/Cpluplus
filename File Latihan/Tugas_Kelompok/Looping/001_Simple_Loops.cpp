/*
	Membuat program looping dari 2 angka yang diinputkan
*/

#include <stdio.h>
#include <conio.h>

main()
{
	int awal, akhir;

	printf("Masukkan bilangan awal : ");
   scanf("%d", &awal);

   printf("Masukkan bilangan terakhir : ");
   scanf("%d", &akhir);

   for(awal; awal<=akhir; awal++){
   	printf("%d", awal);
      if(awal < akhir) {
      	printf(" - ");
      }
   }

   getch();
}