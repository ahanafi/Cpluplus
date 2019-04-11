#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main()
{
	int min, max, n, bil[100];

   cout<<"Masukkan n : ";
   cin>>n;

   max = n;
   min = n;

   cout<<"\n";
   for(int i=0; i<n; i++)
   {
   	cout<<"Masukkan bil ke-"<<i+1<<" = ";
      cin>>bil[i];

      if(bil[i] > max) {
      	max = bil[i];
      }
      if(bil[i] < min) {
      	min = bil[i];
      }
   }

   cout<<"Nilai terbesar adalah : "<<max<<"\n";
   cout<<"Nilai terendah adalah : "<<min<<"\n";

	getch();
}

