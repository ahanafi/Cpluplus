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

using namespace std;

main()
{
    float alas, tinggi, luas;

    cout<<"Masukkan tinggi segitiga : ";
    cin>>tinggi;
    cout<<"Masukkan panjang alas segitiga : ";
    cin>>alas;

    luas = (alas * tinggi) / 2;
    cout<<"Luas segitiganya adalah "<<luas;
}
