#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <windows.h>
#include <conio.h>

/* included files */
#include "Class_User.cpp"
#include "Class_Book.cpp"
#include "Class_Cart.cpp"
#include "Class_Payment.cpp"
//#include "Class_Replay.cpp"
#include "header.cpp"

using namespace std;

main()
{
    int bookCode;
    char replay;
    User().account();
	header();

    show_book_lists :
        Book book1;
        book1.list_of_books();

    input_code_book:
        cout<<"\n"<<endl;
        cout<<"Masukkan kode buku yang ingin dibeli [1-10] : ";
        cin>>bookCode;

	if(bookCode == 0 || bookCode > book1.pjg+1)
    {
        system("cls");
        system("color 4C");
        cout<<" OOPS!!! Maaf kode buku yang Anda masukkan tidak tersedia! \n";
        Beep(1200, 700);
        cin.get();

        /*

        cout<<"Apakah anda mau mengulanginya lagi ? [Y = Yes, N = No] : ";
        cin>>replay;

        if(replay == 'Y' || replay == 'y')
        {
            system("cls");
            goto show_book_lists;
        } else {
            system("exit");
        }
        //*/

    } else {

        system("cls");

        string bookTitle = book1.book_title[bookCode-1];
        int bookPrice = book1.book_price[bookCode-1];
        int bookStock = book1.book_stock[bookCode-1];
        int bookCount;

        cout<<"Anda ingin membeli \t: "<<endl;
        cout<<"\t > Judul buku \t: "<<bookTitle<<"\n";
        cout<<"\t > Stok buku \t: "<<bookStock<<"\n";
        cout<<"\t > Harga 1 buku : Rp."<<bookPrice<<",- \n";
        cout<<"\n";
        cout<<"Masukkan jumlah buku yang ingin Anda beli : ";
        cin>>bookCount;

        if(bookCount < 0 || bookCount == 0)
        {
            system("cls");
            system("color 4C");
            cout<<"OOPS! Jumlah buku yang dibeli harus berupa anga/tidak boleh 0! "<<endl;
            Beep(800, 700);
            cin.get();
            //return 0;
        }
        else if(bookCount > bookStock)
        {
            system("cls");
            system("color C");
            cout<<"OOPS! Jumlah buku yang dibeli tidak boleh lebih dari stock buku! "<<endl;
            Beep(800, 700);
            cin.get();
        } else {

            int totalPayment = bookCount * bookPrice;
            int payment_user;
            cout<<"\n";
            cout<<"Totalnya adalah sebesaar \t : Rp."<<totalPayment<<",-";
            cout<<"\n";
            cout<<"Masukkan uang yang dibayar \t: RP.";
            cin>>payment_user;

            Payment().paymentBuy(totalPayment, payment_user);

        }
    }

    getch();
    return 0;
}


/*
    Copyright 2017 - Created by Ahmad Hanafi
*/
