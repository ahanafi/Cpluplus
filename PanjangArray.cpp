#include <stdio.h>
#include <conio.h>

main()
{
	int angka[] = {0};

   int panjang = sizeof(angka)/sizeof(angka[0]);
   printf("Panjang array ada %d", panjang);
   getch();
}