#include <conio.h>
#include <iostream>

using namespace std;

main()
{
    int n, bil[n];

    cout<<"Masukkan n : ";
    cin>>n;

    for(int i=1; i<= n; i++)
    {
        cout<<"\n";
        cout<<"Masukkan bilangan ke-"<<i<<" = ";
        cin>>bil[i];
    }

    cout<<"HASIL : \n";
    for(int i=1; i<= n; i++)
    {
        cout<<"Bil index ke-"<<i<<" = "<<bil[i]<<"\n";
    }
}
