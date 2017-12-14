/*
	SOAL : 	"Biro TI-Tour membuat aturan untuk wisata group sebagai berikut :
	=============================================================================
	|	   Tujuan		|	Kode	|	Batas Min. Peserta	| Biaya /peserta	|
	=============================================================================
	|	Pangandaran		|	PA		|			100			|	Rp150.000,-		|
	|	Borobudur		|	BO		|			85			|	Rp100.000,-		|
	|		TMII		|	TM		|			50			|	Rp80.000,-		|
	=============================================================================

	- Input 	=> Kode tujuan, jumlah peserta
	- Proses 	=> Lihat data di table
	- Ketentuan	=> Jika jumlah peserta dibawah batas minimal, maka biaya
				   ditambah biaya extra 15% dari biaya di atas
	- Output	=> Total harga
*/

#include <iostream>
#include <stdio.h>

using namespace std;

void line()
{
	cout<<"===========================================================================\n";
}

void data_table()
{
	line();
	cout<<"| Tujuan \t  |	Kode \t | Batas Min. Peserta \t | Biaya /peserta |\n";
	line();
	cout<<"| Pangandaran \t  |	PA \t |  100 \t \t | Rp150.000,-    |\n";
	cout<<"| Borobudur \t  |	BO \t |  85 \t \t \t | Rp100.000,-    |\n";
	cout<<"| TMII	 \t  |	TM \t |  50	 \t \t | Rp80.000,-     |\n";
	line();
	cout<<endl;
}

main()
{
	string kode, nama_tujuan;
	int jum_peserta, min_peserta, biaya_per_peserta, biaya_extra, biaya_total;


	cout<<"\n";
	line();
	cout<<"\t \t \t SELAMAT DATANG DI TI - TOUR \t \t \n";
	line();
	cout<<"\n";
	cout<<"DATA TUJUAN : \n";
	data_table();

	cout<<"Masukkan kode tujuan tour Anda disini : ";
	cin>>kode;

	if(kode == "PA"){
        min_peserta = 100;
        nama_tujuan = "Pangandaran";
        biaya_per_peserta = 150000;
	} else if(kode == "BO"){
		min_peserta = 85;
        nama_tujuan = "Borobudur";
        biaya_per_peserta = 100000;
	} else {
        min_peserta = 50;
        nama_tujuan = "TMII";
        biaya_per_peserta = 80000;
	}

	cout<<"Masukkan jumlah peserta tour : ";
	cin>>jum_peserta;

	if(jum_peserta < min_peserta){
		biaya_extra = (biaya_per_peserta * 15) / 100;
	} else {
		biaya_extra = 0;
	}

	biaya_total = (jum_peserta * biaya_per_peserta) + biaya_extra;

	cout<<"\n";
	cout<<"HASIL : \n";
	line();
	cout<<"Tujuan tour yang Anda pilih adalah \t : "<<nama_tujuan<<endl;
	cout<<"Biaya per peserta adalah \t \t : "<<biaya_per_peserta<<endl;
	cout<<"Jumlah peserta yang ikut tour adalah \t : "<<jum_peserta<<endl;
	cout<<"Biaya extra peserta adalah 	\t : "<<biaya_extra<<endl;
	cout<<"Biaya total yang harus dibayar adalah \t : "<<biaya_total<<endl;
	line();

}

/*
	Copyright 2017 - Ahmad Hanafi
*/
