#include <conio.h>
#include <stdio.h>

main()
{
	int data[10] = {2, 7, 11, 18, 31, 21, 6, 9, 7, 10};
	int minVal = 0, maxVal = 0;

   for(int i=0; i<10; i++) {
   	if(data[i] > maxVal) {
        maxVal = data[i];
   	}
   	if(data[i] < minVal) {
        minVal = data[i];
   	}

   	printf("Data ke-%d adalah %d", i+1, data[i]);
   	printf("\n");
   }
   printf("Bilangan terbesar adalah %d", maxVal);
   printf("\n");
   printf("Bilangan terkecil adalah %d", minVal);



   getch();

}
