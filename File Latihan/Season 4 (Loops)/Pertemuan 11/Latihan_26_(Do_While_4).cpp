#include <stdio.h>
#include <conio.h>

main()
{
	float angka = 1, jumlah = 0, n;
   float rata;

   printf("Masukkan jumlah n : ");
   	scanf("%f", &n);

    do{
   	printf("%1.0f", angka);
      if(angka < n) {
      	printf(" + ");
      }
      jumlah = jumlah + angka;
		angka++;
   }while(angka <= n);

	rata = (jumlah / n);
   printf("%4.0f \n", jumlah);
   printf("Rata-rata = Jumlah / Banyak_Data \n");
   printf("Rata-rata = %4.0f / %1.0f \n", jumlah, n);
   printf("Rata-rata = %4.2f \n", rata);

   getch();



}