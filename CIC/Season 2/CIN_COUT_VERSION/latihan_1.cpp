/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)

    Penjumlahan 3 buah bilangan yang berbeda dan mencari rata-ratanya

    This program created at Codeblocks
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

main()
{
    int bil_1, bil_2, bil_3, hasil;
    float rata;

    cout<<"Masukkan bilangan ke-1 : ";
        cin>>bil_1;
    cout<<"Masukkan bilangan ke-2 : ";
        cin>>bil_2;
    cout<<"Masukkan bilangan ke-3 : ";
        cin>>bil_3;

    hasil = bil_1 + bil_2 + bil_3;
    rata = hasil / 3;

    system("cls");
    cout<<"======================= \n";
    cout<<"DIKETAHUI : \n";
    cout<<"BIL 1 : "<<bil_1<<"\n";
    cout<<"BIL 2 : "<<bil_2<<"\n";
    cout<<"BIL 3 : "<<bil_3<<"\n";
    cout<<"======================= \n";
    cout<<"BIL 1 + BIL 2 + BIL 3 = \n";
    cout<<bil_1<<" + "<<bil_2<<" + "<<bil_3<<" = "<<hasil<<"\n";
    cout<<"RATA-RATA = "<<rata;




}
