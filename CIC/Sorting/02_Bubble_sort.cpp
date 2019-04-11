#include <stdio.h>
#include <conio.h>

main()
{
	int n, arr[100];

	printf("======================================\n");
	printf("[ PROGRAM PENGURUTAN DATA PADA ARRAY ]\n");
	printf("======================================\n\n");

	printf("Masukkan n : ");
	scanf("%d", &n);
	printf("\n");

	for(int i=0; i<n; i++){
		printf("Masukkan angka index ke-%d : ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\n");
	printf("[ DATA SEBELUM DIURUTKAN ]\n");

	for(int a=0; a<n; a++) {
		printf("%d  ", arr[a]);
	}

	int j, k, temp;
	for(j=0; j < n - 1; j++) {

		for(k=0; k < n-j-1; k++) {

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
