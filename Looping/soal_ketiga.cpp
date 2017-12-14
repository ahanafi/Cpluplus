#include <iostream>

using namespace std;

main()
{
    bool success = false;
    int x = 0;
    string uname = "admin", pass = "admin";
    string username, password;

    while(success = false || x <= 3){
		cout<<"Masukkan username anda : ";
		cin>>username;
		cout<<"Masukkan password anda : ";
		cin>>password;
		cout<<"\n";
		if(username == uname && password == pass){
			success = true;
			x = 5;
			cout<<"LOGIN BERHASIL!!! \n ";
		} else {
			cout<<"LOGIN GAGAL, SILAHKAN ULANGI LAGI! \n";
			x = x + 1;
		}
    }
}
