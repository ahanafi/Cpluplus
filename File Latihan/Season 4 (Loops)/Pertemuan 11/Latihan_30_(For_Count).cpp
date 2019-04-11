#include <stdio.h>
#include <conio.h>

main()
{
	float angka, n, jumlah = 0, rata = 0, i;

   printf("Masukkan banyak n : ");
   	scanf("%f", &n);

   for(i=1; i<=n; i++) {
   	printf("%1.0f", i);
      if(i<n) {
      	printf("+");
      }

      jumlah = jumlah + i;
   }

   rata = jumlah / n;
   printf(" =%4.0f \n", jumlah);
   printf("Rata-rata = Jumlah_data / Banyak_data \n");
   printf("Rata-rata = %4.0f / %2.0f \n", jumlah, n);
   printf("Rata-rata = %2.2f \n", rata);

   getch();
}