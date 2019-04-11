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

using namespace std; //if using Borland, please delete this line

main()
{
    const float phi = 3.14;
    float jari, hasil;

    cout<<"Masukkan panjang jari-jari lingkaran : ";
    cin>>jari;
    hasil = 2 * phi * jari;
    cout<<"Keliling lingkarannya adalah "<<hasil;
}
