#include <iostream>
#include <conio.h>
#include <stdio.h>

main()
{
	const max = 100;
   int N;
   struct Mahasiswa{
   	int nim;
   	char* nama;
      char* prodi;
      int semester;
   };

   Mahasiswa Mhs1[max];

	printf("n : ");
   scanf("%d \n", &N);
   for(int i=0; i<N; i++){
   	printf("Nama : ");
     /* 	scanf("%s \n", &Mhs1[i].nama);
      printf("NIM : ");
      	scanf("%d\n", &Mhs1[i].nim);
      printf("Prodi : ");
      	scanf("%s \n", &Mhs1[i].prodi);
      printf("Semeseer : ");
      	scanf("%d\n", &Mhs1[i].prodi);*/
   }

   getch();
   
}