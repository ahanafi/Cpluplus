#include <iostream>

using namespace std;

main()
{
    int arr[100], n, angka, temp;

    cout<<"Masukkan banyak data : ";
    cin>>n;

    cout<<endl;
    for(int i=0; i < n; i++) {
        cout<<"Masukkan angka pada index ke-"<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"SEBELUM SORTING : \n";
    for(int x=0; x < n; x++) {
        cout<<arr[x]<<"  ";
    }

    cout<<endl;
    cout<<"SETELAH SORTING : \n";
    for(int j=0; j < n - 1; j++) {
        for(int k=0; k < n - 1 -j; k++) {
            if(arr[k] > arr[k+1]) {
                temp =  arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
        cout<<arr[j]<<"  ";
    }

}
