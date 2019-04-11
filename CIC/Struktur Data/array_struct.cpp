#include <stdio.h>
#include <conio.h>

typedef struct{
	int nim;
   char nama[100];
   float ipk;
} Mahasiswa;

main()
{
   const max = 100;
   int n;
	Mahasiswa mhs[max];

	clrscr();

   printf("============================== \n");
   printf("     PROGRAM ARRAY STRUCT      \n");
   printf("============================== \n");
   printf("\n");

   a:
	   printf("Masukkan banyak data : ");
   		scanf("%d", &n);
      printf("\n");

   if(n > 100) {
   	clrscr();
   	printf("\a Maaf! Data tidak boleh lebih dari 100! \n");
		goto a;
   } else {
   	for(int i=0; i< n; i++) {
		   printf("Masukkan NIM Mahasiswa  ke-%d : ", i+1);
         	scanf("%d", &mhs[i].nim);

		   printf("Masukkan Nama Mahasiswa ke-%d : ", i+1);
         	scanf("%s", &mhs[i].nama);

		   printf("Masukkan IPK Mahasiswa ke-%d : ", i+1);
         	scanf("%f", &mhs[i].ipk);

         printf("\n");
      }

    	printf("======================= \n");
      printf("        RESULTS         \n");
		for(int k=0; k<n; k++){
	    	printf("======================= \n");
         printf("Mahasiswa ke-%d\n", k+1);
         printf("\n");
			printf("NIM  : %d \n", mhs[k].nim);
			printf("Nama : %s \n", mhs[k].nama);
		   printf("IPK  : %2.2f \n", mhs[k].ipk);
         printf("\n");

      }

   }

   getch();
}
