/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program Operasi artimatika
   Kurang, tambah, kali, bagi

   This program created in Codeblocks
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

main()
{
    int bil_1, bil_2, bil_3, bil_4, bil_5;
    float hasil;

    cout<<"========================================== \n";
    cout<<"        PROGRAM SEDERHANA ARITMATIKA       \n";
    cout<<"========================================== \n";
    cout<<"\n";

    cout<<"Masukkan bilangan 1 : ";
        cin>>bil_1;
    cout<<"Masukkan bilangan 2 : ";
        cin>>bil_2;
    cout<<"Masukkan bilangan 3 : ";
        cin>>bil_3;
    cout<<"Masukkan bilangan 4 : ";
        cin>>bil_4;
    cout<<"Masukkan bilangan 5 : ";
        cin>>bil_5;

    hasil = (bil_1 + bil_2 - bil_3) * (bil_4) / bil_5;

    cout<<"\n"<<endl;
    cout<<"Diketahui : \n"<<endl;
    cout<<"========================================== \n";
    cout<<"Bilangan 1 : "<<bil_1<<"\n";
    cout<<"Bilangan 2 : "<<bil_2<<"\n";
    cout<<"Bilangan 3 : "<<bil_3<<"\n";
    cout<<"Bilangan 4 : "<<bil_4<<"\n";
    cout<<"Bilangan 5 : "<<bil_5<<"\n";
    cout<<"========================================== \n";
    cout<<"Hasil : \n";
    cout<<"=> (BIL_1 + BIL_2 - BIL_3) * (BIL_4) / (BIL_5) = \n";
    cout<<"=> ("<<bil_1<<" + "<<bil_2<<" + "<<bil_3<<") * ("<<bil_4<<") / ("<<bil_5<<") = "<<hasil;


}
