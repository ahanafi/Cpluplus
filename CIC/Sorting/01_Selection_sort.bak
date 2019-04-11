#include <stdio.h>
#include <conio.h>

main()
{
	int n, arr[100];
   
	printf("======================================\n");
	printf("[ PROGRAM PENGURUTAN DATA PADA ARRAY ]\n");
	printf("======================================\n");
	printf("\n");

	printf("Masukkan n : ");
	scanf("%d", &n);
	printf("\n");

	for(int i=0; i<n; i++){
		printf("Masukkan angka index ke-%d : ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\n\n[ DATA SETELAH DIURUTKAN ] \n");

	for(int d=0; d<n; d++) {
		printf("%d    ", arr[d]);
	}
	
	int minIdx;
	int temp;

	printf("\n\n[ DATA SETELAH DIURUTKAN ] \n");

	for (int j = 0; j < n  ; j++){

		minIdx = j;

		for(int k = j + 1; k < n; k++) {
			if(arr[k] < arr[minIdx]) {
				minIdx = k;
			}
		}

		temp = arr[minIdx];
		arr[minIdx] = arr[j];
		arr[j] = temp;


		printf("%d    ", arr[j]);
	}
	getch();
}