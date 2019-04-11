#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int n, bil = {}, total;
    float rata;

    cout<<"================================== \n";
    cout<<"   PROGRAM MENGHITUNG RATA-RATA    \n";
    cout<<"================================== \n";
    cout<<"\n";

    cout<<"Masukkan banyak bilangan = ";
    cin>>n;

    for(int i=0; i< n; i++)
    {
        cout<<"Masukkan bilangan ke-"<<i + 1;
        cin>>bil;
    }

    for(int i=0; i < n; i++)
    {
        cout<<"Bilangan ke-"<<i+1<<" adalah "<<bil<<"\n";
    }
}
