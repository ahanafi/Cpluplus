/*
    Tujuan  : Menjumlahkan 2 variable
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Mata Kuliah : Algoritma dan Pemrograman 1
*/

#include <conio.h>
#include <iostream>
#include <stdlib.h>

main()
{
    int a, b, c;

    cout<<"Program Menjumlahkan 2 variable \n";
    cout<<"=============================== \n";
    cout<<endl;
    cout<<"Masukkan bil A = ";
    cin>>a;
    cout<<"Masukkan bil B = ";
    cin>>b;

    c = a + b;
    system("cls");
    cout<<"MENGHITUNG \n";
    cout<<"================ \n";
    cout<<"NILAI A = "<<a<<endl;
    cout<<"NILAI B = "<<b<<endl;
    cout<<"HASIL A + B = "<<c;
    getch();

}
