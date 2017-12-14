#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Books
{
    string book_title[10] = {	"Belajar C++ untuk pemula              ",
							"Mudah menguasai PHP                   ",
							"Tutorial NodeJS bagi pemula           ",
							"Membuat Website dengan Codeigniter    ",
							"Tips dan Trik jadi Blogger Handal     ",
							"Tips jitu mahir jadi Web Programmer   ",
							"Jadi milyarder dengan Bitcoin         ",
							"Belajar membangun CMS dengan Laravel 5",
							"Belajar membuat Aplikasi Android dari 0",
							"Mengamankan website dari Hacker!      "};
	float book_price[10] = {25000, 50000, 65000, 75000, 35000, 83000, 130000, 100000, 150000, 125000};

	int length_arr = sizeof(book_title)/sizeof(book_title[0]);
	int pjg = length_arr-1;

    public :
    void views(){
        cout<<"==========================================================\n";
        cout<<"No | Judul Buku 	\t\t\t | Harga |"<<endl;
        cout<<"==========================================================\n";
        for(int i=0; i<= pjg; i++)
        {
            cout<<i+1<<" "<<" | "<<book_title[i]<<" \t | "<<book_price[i]<<" |\n";
        }
    }
};

main()
{
    Books().views();
}
