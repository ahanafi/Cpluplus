#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>

/* included files */
#include "Class_User.cpp";
#include "Class_Book.cpp";
#include "Class_Cart.cpp";
#include "Class_Payment.cpp";

#include "header.cpp";

using namespace std;

main()
{
    int kode_buku;
    User().account();
	header();

	Book book1;
	book1.list_of_books();

    cout<<"\n"<<endl;

	cout<<"Masukkan kode buku yang ingin dibeli [1-10] : ";
	cin>>kode_buku;

	if(kode_buku == 0 || kode_buku > 10)
    {
        system("cls");
        system("color 4C");
        cout<<"\a OOPS!!! Maaf kode buku yang Anda masukkan tidak tersedia! \n";

    } else {

        system("cls");

        string nama_buku[] = {book1.book_title[kode_buku-1]};
        int harga_buku[] = {book1.book_price[kode_buku-1]};
        int jumlah_beli_buku[] = {};
        int jum_beli = (sizeof(jumlah_beli_buku)/sizeof(jumlah_beli_buku[0]))-1;
        char belanja_lagi[1];

        cout<<"Anda ingin membeli buku \t: "<<nama_buku<<"\n";
        cout<<"Dengan harga satuannya adalah \t: Rp."<<harga_buku<<",- \n";
        cout<<"\n";
        cout<<"Masukkan jumlah buku yang ingin Anda beli \t: ";
        cin>>jum_beli;

        cout<<"\n"<<endl;
        cout<<"Apakah Anda ingin menambah barang untuk dibeli ? [Y = Yes, N = No] : ";
        cin>>belanja_lagi;

        if(belanja_lagi == "Y" || belanja_lagi == "y")
        {
            cout<<"Lagi!";
        } else {
            cout<<"Udah!";

        }
    }

    return 0;
}
