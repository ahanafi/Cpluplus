/*
	ALGORITMA mencetak_banyak_kata
   {mencetak kata "Hai" sampai 10}

   DEKLARASI
   	k : integer

   DESKRIPSI
   	k <- 1

      while (k <= 10) do
      	write('Hai')
			k++
      endwhile

*/

#include <stdio>
#include <conio.h>

main()
{
	int k = 1;

   while(k <= 10) {
   	printf("Hai \n", k);
      k++;
   }
   getch();
}