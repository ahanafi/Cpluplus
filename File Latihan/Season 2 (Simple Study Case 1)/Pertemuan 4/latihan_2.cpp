/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)

    Mencari keliling lingkaran
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

main()
{
    const float phi = 3.14;
    float jari, hasil;

    printf("Masukkan panjang jari-jari lingkaran : ");
    scanf("%f", &jari);
    hasil = 2 * phi * jari;
    printf("Keliling lingkarannya adalah %2.2f \n", hasil);
}
