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

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

main()
{
  const float phi = 3.14;
  int jari_jari;
  float keliling_m, keliling_cm;

  cout<<"PROGRAM MENGHITUNG KELILING LINGKARAN DALAM M DAN CM \n";
  cout<<"\n";
  cout<<"Masukkan panjang jari-jari Lingkaran dalam M : ";
  cin>>jari_jari;

  keliling_m = 2 * phi * jari_jari;
  keliling_cm = keliling_m / 100;


  cout<<"=================================================== \n";
  cout<<"Diketahui : \n";
  cout<<"Jari-jari : "<<jari_jari<<endl;
  cout<<"Phi       : "<<phi<<endl;
  cout<<"=================================================== \n";
  cout<<"Rumus     : 2 x PHI * JARI-JARI \n";
  cout<<"=================================================== \n";
  cout<<"Hasil Perhitungan \n";
  cout<<"Keliling Lingkaran dalam M  : "<<keliling_m<<endl;
  cout<<"Keliling Lingkaran dalam CM : "<<keliling_cm<<endl;
  cout<<"=================================================== \n";
  getch();


}
