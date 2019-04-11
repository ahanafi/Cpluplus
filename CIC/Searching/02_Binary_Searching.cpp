#include <iostream>
#include <conio.h>

main()
{
    clrscr();
    int n, arr[100], find, first, last, middle;

    cout<<"===================================\n";
    cout<<" PROGRAM PENCARIAN (BINARY SEARCH) \n";
    cout<<"===================================\n";
    cout<<endl;

    cout<<"Masukkan n : ";
    cin>>n;

    cout<<"\n";
    for(int i=0; i<n; i++) {
      cout<<"Masukkan nilai index ke-"<<i<<" : ";
      cin>>arr[i];
    }

    cout<<"\n";
    cout<<"Masukkan nilai yang dicari : ";
    cin>>find;

    first = 0;
    last  = n - 1;
    middle = (first + last) / 2;

    cout<<"\n";
    while(first <= last) {
      if(arr[middle] < find) {
        first = middle + 1;
      } else if(arr[middle] == find) {
        cout<<"Data "<<find<<" ditemukan di index ke-"<<middle+1<<endl;
        break;
      } else {
        last = middle - 1;
      }

      middle = (first + last) / 2;
    }

    if (first > last){
      cout<<"Data "<<find<<" tidak ditemukan!";
    }

    getch();

}
