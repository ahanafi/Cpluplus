#include <stdio.h>
#include <conio.h>

main()
{
	int angka = 1, n;

   printf("Masukkan banyak n : ");
   	scanf("%d", &n);

   do{
   	printf("%d \n", angka);
      angka++;
   }while(angka <= n);
   getch();
}
