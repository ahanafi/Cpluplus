/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)

    Program Menge-cek bilangan ganjil atau genap

    This program created at Codeblocks
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

main()
{
    int bilangan;
    string ket;

    cout<<"======================================== \n";
    cout<<"       PROGRAM MENGECEK BILANGAN         \n";
    cout<<"======================================== \n";
    cout<<"\n";

    cout<<"Masukkan bilangan : ";
        cin>>bilangan;

    if(bilangan % 2 == 0) {
        ket = "GENAP";
    } else {
        ket = "GANJIL";
    }

    cout<<"Bilangan yang Anda masukkan adalah BILANGAN "<<ket;

}
