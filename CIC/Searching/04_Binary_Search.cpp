#include <iostream>
#include <conio.h>
#include <stdio.h>

main()
{
	int arr[100], start, middle, last, n, find;

    printf("===================================\n");
    printf(" PROGRAM PENCARIAN (BINARY SEARCH) \n");
    printf("===================================\n\n");

	printf("Masukkan banyak n : ");
	scanf("%d", &n);

	printf("\n");
	for(int i=0; i<n; i++) {
		printf("Masukkan nilai index ke-%d : ", i+1);
		scanf("%d", &arr[i]);
	}

	start = 0;
	last  = n - 1;

	printf("\nMasukkan nilai yang dicari : ");
	scanf("%d", &find);

	while(start <= last) {
		middle = (start + last) / 2;

		if(arr[middle] == find) {
			printf("\nData %d ditemukan pada index ke-%d", find, middle+1);
			break;
		} else if(arr[middle] < find) {
			start = middle + 1;
		} else if(arr[middle] > find) {
			last = middle - 1;
		}
	}

	if(last < start) {
		printf("Data tidak ditemukan!\n");
	}
	getch();
}
