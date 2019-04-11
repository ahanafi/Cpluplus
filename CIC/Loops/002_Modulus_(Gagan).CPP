/*
	Nama	: Gagan Suganda
   Kelas : TI 1-2
*/

#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <string.h>

void Modulus(){
	int bilangan, pembagi, sisa, g;
   char ulang[2];

   g = 1;
   while(g < 3){
   	clrscr();
		printf("============================================\n");
 		printf("    Masukan jumlah bilangan  : "); scanf("%d",&bilangan);
   	printf("    Masukan bilangan pembagi : "); scanf("%d",&pembagi);
      printf("--------------------------------------------\n");
		if(bilangan % pembagi == 0){
   		printf("    Hasilnya : Tidak ada\n\n");
   	}else{
   		sisa = bilangan % pembagi;
   		printf("    Hasilnya : %d\n", sisa);
   	}

      printf("--------------------------------------------\n");
   	printf("    Apakah anda ingin mengulang? [Y/T]  = "); scanf("%s", &ulang);
   	if((strcmp(ulang, "Y") == 0) || (strcmp(ulang, "y") == 0)){
    		g = g;
   	}else{
      	g = g + 3;
   	}
   }
   clrscr();
   printf("\n\n\n                    Terima Kasih :)\n");
   printf("    Tekan Enter sekali lagi untuk menutup program\n");
   getch();
}