/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)

    Penjumlahan 3 buah bilangan yang berbeda dan mencari rata-ratanya
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

main()
{
    float bil_1, bil_2, bil_3, hasil;
    float rata;

    printf("Masukkan bilangan ke-1 : ");
    scanf("%f", &bil_1);

    printf("Masukkan bilangan ke-2 : ");
    scanf("%f", &bil_2);

    printf("Masukkan bilangan ke-3 : ");
    scanf("%f", &bil_3);

    hasil = bil_1 + bil_2 + bil_3;
    rata  =  hasil / 3;

    printf("Hasilnya adalah : %2.2f \n", hasil);
    printf("Rata-ratanya adalah : %2.2f", rata);


}
