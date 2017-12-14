using namespace std;

class Book{
    public :
        string book_title[10] =  {"Belajar C++ untuk pemula              ",
                                  "Mudah menguasai PHP                   ",
                                  "Tutorial NodeJS bagi pemula           ",
                                  "Membuat Website dengan Codeigniter    ",
                                  "Tips dan Trik jadi Blogger Handal     ",
                                  "Tips jitu mahir jadi Web Programmer   ",
                                  "Jadi milyarder dengan Bitcoin         ",
                                  "Belajar membangun CMS dengan Laravel 5",
                                  "Belajar membuat Aplikasi Android dari 0",
                                  "Mengamankan website dari Hacker!      "};

        float book_price[10] = {25000 , 50000 , 65000 , 75000 , 35000 , 83000 , 130000, 100000, 150000, 125000};
        int book_stock[10] = {15, 18, 23, 17, 12, 30, 4, 7, 5, 9};
        int length_arr, pjg;

        void list_of_books()
        {
            length_arr = sizeof(book_title)/sizeof(book_title[0]);
            pjg = length_arr-1;
            char str[] = {};

            cout<<"=================================================================\n";
            cout<<"| No | Judul Buku 	\t\t\t | Harga | Stok |"<<endl;
            cout<<"=================================================================\n";

            for(int i=0; i<= pjg; i++)
            {
                //if(strlen(i) != 2){
                //    cout<<"| 0"<<i+1<<" "<<" | "<<book_title[i]<<" \t | "<<book_price[i]<<" | "<<book_stock[i]<<" \t| \n";
                //} else {
                    cout<<"| "<<i+1<<" "<<" | "<<book_title[i]<<" \t | "<<book_price[i]<<" | "<<book_stock[i]<<" \t| \n";
                //}

            }
            cout<<"=================================================================\n";
        }
};
