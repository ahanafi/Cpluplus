/*
	Nama 	: Ahmad Hanafi
   NIM	: 2017102020
   Kelas : TI 1/2

   Program penyewaan DVD
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
   char is_have_member_card, *ket;

	const float disc = 0.1;
   int total_disc;
   int besar_denda;
   int jum_dvd;
   int harga_per_dvd;
   int total_harga, sub_total;
   int tgl_pinjam, tgl_kembali, lama;


   printf("==================================== \n");
   printf("    	PROGRAM PENYEWAAN DVD         \n");
   printf("==================================== \n");
   printf("\n");

   printf("Masukkan jumlah DVD : ");
   	scanf("%d", &jum_dvd);

   printf("Masukkan harga per DVD : ");
   	scanf("%d", &harga_per_dvd);

   printf("Masukkan tanggal pinjam : ");
   	scanf("%d", &tgl_pinjam);

   printf("Masukkan tanggal kembali : ");
   	scanf("%d", &tgl_kembali);

   printf("Apkah anda mempunyai KTA ? [Y/T] ");
   	scanf(" %c", &is_have_member_card);

   sub_total = jum_dvd * harga_per_dvd;

   if( jum_dvd > 3 || (is_have_member_card == 'Y' || is_have_member_card == 'y') ) {
		total_disc = sub_total * 0.1;
   } else {
   	total_disc = sub_total * 0;
   }

   if(is_have_member_card == 'y' || is_have_member_card == 'Y'){
   	ket = "PUNYA";
   } else {
      ket = "TIDAK PUNYA";
   }

   lama = tgl_kembali - tgl_pinjam;

   if(lama > 2) {
		besar_denda = jum_dvd * 1500 * (lama - 2);
   } else {
   	besar_denda = jum_dvd * 1500 * 0;
   }

   total_harga = sub_total - total_disc + besar_denda;
//   clrscr();
   printf("============================= \n");
   printf("HASIL : \n");
   printf("============================= \n");
   printf("\n");
   printf("Jumlah DVD : %d buah \n", jum_dvd);
   printf("Harge per DVD : %d \n", harga_per_dvd);
   printf("Tanggal Pinjam : %d \n", tgl_pinjam);
   printf("Tanggal Kembali : %d \n", tgl_kembali);
   printf("Lama pinjam : %d hari \n", lama);
   printf("Kartu Anggota : %s \n", ket);
   printf("Diskon : %d \n", total_disc);
   printf("Denda  : %d \n", besar_denda);
   printf("TOTAL  : %d \n", total_harga);

   getch();
}