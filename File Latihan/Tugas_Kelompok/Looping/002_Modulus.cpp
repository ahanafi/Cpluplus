#include <stdio.h>
#include <conio.h>

main()
{
	int asli, pembagi, mod;
   char ulang;
   char* ket;

   do{
   	clrscr();
   	printf("Masukkan bilangan : ");
      scanf("%d", &asli);

      printf("Masukkan bil. pembagi : ");
      scanf("%d", &pembagi);

      mod = asli % pembagi;
      if(mod == 0) {
      	printf("Tidak ada Hasil sisa bagi \n");
      } else {
			printf("Hasil sisa bagi : %d \n", mod);
      }

      printf("Mau mengulang ? [Y/T] : ");
      scanf(" %c", &ulang);
   }while(ulang == 'Y' || ulang == 'y');

   getch();
}