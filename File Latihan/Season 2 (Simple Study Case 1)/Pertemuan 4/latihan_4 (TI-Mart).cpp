/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)
*/
/*
    Dalam rangka opening, TI-Mart memberikan diskon sebesar 10%
    dari setiap total belanja. Hitunglah total pembayaran belanja
    seorang konsumen pada TI-Mart tersebut!
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

main()
{
    char kode[10], nama[30];
    int harga, jumlah_bayar, total;
    float diskon;
    int jumlah;

    printf("Masukkan kode barang :");
    scanf("%s", &kode);
    printf("Masukkan nama barang : ");
    scanf("%s", &nama);
    printf("Masukkan harga satuan barang : ");
    scanf("%d", &harga);
    printf("Masukkan jumlah barang yang dibeli : ");
    scanf("%d", &jumlah);

    jumlah_bayar = harga * jumlah;
    diskon = jumlah_bayar * 0.10;
    total = jumlah_bayar - diskon;

    printf("\n ==================== \n");
    printf("Kode barang : %s \n", kode);
    printf("Nama barang : %s \n", nama);
    printf("Harga barang : %d \n", harga);
    printf("Jumlah barang : %d \n", jumlah);
    printf("Diskon : %f \n", diskon);
    printf("Total pembayaran : %f \n", total);


}
