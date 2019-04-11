/*
	Nama	: Ahmad Hanafi
	NIM		: 2017102020
	Prodi	: Teknik Informatika 1/1
*/

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

main()
{
	/* Deklarasi variable */
	int jumlah;
	float harga_per_unit, harga_total;

	/* Deskripsi */
	system("cls");
	jumlah = 10;
	harga_per_unit = 17.5;
	harga_total = jumlah * harga_per_unit;

	printf("Harga total = %f \n", harga_total);
	getch();
}
