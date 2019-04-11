/*		Squential Search	 */

#include <iostream>

using namespace std;
main()
{
	int n, arr[10], _find;
	bool found = false;

	do{
		cout<<"Masukkan banyak data : ";
		cin>>n;
	}while(n <= 0);

    cout<<endl;
	for (int i = 0; i < n; ++i){
		cout<<"Masukkan angka ke-"<<i+1<<" : ";
		cin>>arr[i];
	}

    cout<<endl;
	cout<<"Masukkan angka yang dicari : ";
	cin>>_find;

    cout<<endl;
	for(int j=0; j < n; j++){
        if(arr[j] == _find){
            cout<<"Angka "<<_find<<" berada pada index ke-"<<j+1;
            found = true;
            break;
        }
	}

	if(found != true) {
        cout<<endl;
        cout<<"Data yang Anda cari tidak ditemukan!";
	}
}
