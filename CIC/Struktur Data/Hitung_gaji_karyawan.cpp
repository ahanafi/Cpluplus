/*
SOAL :
Buatlah algoritma untuk menginputkan gaji karyawan dengan ketentuan :
Input		: Nama, golongan, jam lembur
Proses 	:
				Jika gol '1A' maka Gaji = 750000 & tarif lembur = 10000
            Jika gol '1B' maka Gaji = 900000 & tarif lembur = 12500
            Jika gol '1C' maka Gaji = 1000000 & tarif lembur = 15000

            untuk mendapatkan upah lembur
            jam_lembur * tarif lembur

            untuk mendapatkan total gaji
            total gaji = gaji + upah lembur

            Hitunglah juga jumlah total gaji seluruh pegawai yang diinputkan

Proses akan berhenti saat pesan pengulangan Menghitung lagi [Y/T] dijawab 'T'
*/

/*
JAWAB :

Algoritma Menghitung_Gaji_Karyawan

#DEKLARASI
   int tarif_lembur
   int total_gaji_all
   int gaji
   int max = 100

   type Kyw : record <
						string nama
					   string gol
					   int jam_lembur
                  int upah_lembur
                  int total_gaji
                  >
   TabKyw : array[1..max] of Kyw
   int k
   int n
   char ulang

#DESKRIPSI

	do
		write('Masukkan banyak karyawan : ') read(n)

   	for k<- 1 to n do
   		write('Nama karyawan ke- ', k)
	      read(TabKyw[k].nama)

   	   write('Golongan [1A/1B/1C] : ')
      	read(TabKyw[k].gol)

	      write('Total jam lembur : ')
   	   read(TabKyw[k].jam_lembur)

      	if (TabKyw[k].gol == '1A') then
      		gaji <- 750000
	         tarif_lembur <- 10000
	      elseif (TabKyw[k].gol == '1B') then
   	   	gaji <- 900000
      	   tarif_lembur <- 12500
	      else
   	   	gaji <- 10000000
      	   tarif_lembur <- 15000
	      endif

   	   TabKyw[k].upah_lembur <- TabKyw[k].jam_lembur * tarif_lembur
      	TabKyw[k].total_gaji  <- TabKyw[k].upah_lembur + gaji

	      total_gaji_all <- 0 + TabKyw[k].total_gaji
   	endfor
   while(ulang = 'Y' OR ulang = 'y)
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

typedef struct{
	char nama[100];
   char gol;
   int jam_lembur, upah_lembur, total_gaji, gaji_kyw, tarif_kyw;
} Karyawan;

main()
{
   const int max = 100;
   int n;
   int gaji, tarif_lembur;
   Karyawan kyw[100];
	char ulang;
	int total_gaji_all = 0;

   clrscr();

   do{
   	printf("Masukkan banyak pegawai : ");
      	scanf("%d", &n);

      printf("\n");
		printf("INPUT DATA : \n");
      for(int i=0; i < n; i++){

      	//input nama
      	printf("Masukkan nama pegawai ke- %d : ", i+1);
         	scanf("%s", &kyw[i].nama);

         //input golongan
         printf("Masukkan kode golongan [A/B/C] : ");
         	scanf("%s", &kyw[i].gol);

         //input jam_lembur
         printf("Masukkan total jam lembur : ");
         	scanf("%d", &kyw[i].jam_lembur);

         //Proses seleksi gaji dan upah lembur
         if(kyw[i].gol == 'A') {
         	kyw[i].gaji_kyw = 750000;
            kyw[i].tarif_kyw = 10000;
         } else if(kyw[i].gol == 'B') {
         	kyw[i].gaji_kyw = 900000;
            kyw[i].tarif_kyw = 12500;
         } else {
         	kyw[i].gaji_kyw = 1000000;
            kyw[i].tarif_kyw = 15000;
         }

			//kyw[i].tarif_kyw = tarif_lembur;
			//kyw[i].gaji_kyw  = gaji;
         kyw[i].upah_lembur = kyw[i].jam_lembur * kyw[i].tarif_kyw;
         kyw[i].total_gaji  = kyw[i].gaji_kyw * kyw[i].upah_lembur;

         total_gaji_all = total_gaji_all + kyw[i].total_gaji;

         printf("Total gaji karyawan ke-%d : ", i+1);
         printf("%d \n", kyw[i].total_gaji);

         printf("============================ \n");
      }

   	printf("HASIL : \n");

		for(int j=0; j<n; j++) {
      	printf("Nama Karyawan ke-%d : ", j+1);
         printf("%s \n", kyw[j].nama);

         printf("Golongan : %s \n", kyw[j].gol);

         printf("Gaji \t : %d \n", kyw[j].gaji_kyw);
         printf("Tarif lembur : %d \n", kyw[j].tarif_kyw);
         printf("Jam lembur : %d jam \n", kyw[j].jam_lembur);
         printf("Total gaji : %d \n", kyw[j].total_gaji);
         
         printf("============================ \n");
      }

 //		printf("Total gaji seluruh karyawan : %d \n", total_gaji_all);
      printf("Apakah Anda mau mengulang ? [Y/T] : ");
      	scanf(" %c", &ulang);
   } while(ulang == 'Y' || ulang == 'y');

	getch();
}


















