/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)

    Menghitung luas segitiga
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

main()
{
    float alas, tinggi, luas;

    printf("Masukkan tinggi segitiga : ");
    scanf("%f", &tinggi);
    printf("Masukkan panjang alas segitiga : ");
    scanf("%f", &alas);

    luas = (alas * tinggi) / 2;
    printf("Luas segitiganya adalah %2.2f \n", luas);
}
