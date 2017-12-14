#include <iostream>

using namespace std;

main()
{
	int bil_utama, bil_pembagi;
	float hasil;
	char ulang;

	do{
		cout<<"Masukkan bilangan yang ingin di bagi : ";
		cin>>bil_utama;
		cout<<"Masukkan bilangan pembagi : ";
		cin>>bil_pembagi;

		hasil = bil_utama % bil_pembagi;
		if(hasil == 0){
			cout<<"Ngga ada hasilnya! \n";
		} else {
			cout<<"Sisa hasil bagi adalah : "<<hasil<<endl;
		}

		cout<<"Apakah Anda mau mengulang ? [Y/T] : ";
		cin>>ulang;
	}while(ulang == 'Y' || ulang == 'y');

}
