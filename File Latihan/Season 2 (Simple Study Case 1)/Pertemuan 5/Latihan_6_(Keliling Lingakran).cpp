/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)
*/
/*
	Program Menghitung Keliling Lingkaran dalam satuan M dan CM!
   Keliling = 2 * phi * r
*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main()
{
  const float phi = 3.14;
  int jari_jari;
  float keliling_m, keliling_cm;

  printf("PROGRAM MENGHITUNG KELILING LINGKARAN DALAM M DAN CM \n");
  printf("\n");
  printf("Masukkan panjang jari-jari Lingkaran dalam M : ");
  scanf("%d", &jari_jari);

  keliling_m = 2 * phi * jari_jari;
  keliling_cm = keliling_m / 100;


  printf("=================================================== \n");
  printf("Diketahui : \n");
  printf("Jari-jari : %d \n", jari_jari);
  printf("Phi       : %0.2f \n", phi);
  printf("=================================================== \n");
  printf("Rumus     : 2 x PHI * JARI-JARI \n");
  printf("=================================================== \n");
  printf("Hasil Perhitungan \n");
  printf("Keliling Lingkaran dalam M  : %0.2f \n", keliling_m);
  printf("Keliling Lingkaran dalam CM : %0.3f \n", keliling_cm);
  printf("=================================================== \n");
  getch();


}
