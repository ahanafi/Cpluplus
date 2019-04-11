#include <stdio.h>
#include <conio.h>

main()
{
	int arr[10] = {76, 41, 22, 95, 281, 12, 56, 3, 9, 33};
	int n = 10;

	printf("======================================\n");
	printf("[ PROGRAM PENGURUTAN DATA PADA ARRAY ]\n");
	printf("[         METODE BUBBLE SORT         ]\n");
	printf("======================================\n\n");

	printf("[ DATA SEBELUM DIURUTKAN ]\n");

	for(int a=0; a<n; a++) {
		printf("%d  ", arr[a]);
	}

	int j, k, temp;
	for(j=0; j < n; j++) {
		for(k=0; k < n-j; k++) {
			if(arr[k] > arr[k+1]) {
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}

	printf("\n\n");
	printf("[ DATA SETELAH DIURUTKAN ]\n");

	for(int x=0; x<n; x++) {
		printf("%d  ", arr[x]);
	}

	getch();
}
