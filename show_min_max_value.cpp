#include <iostream>

using namespace std;

main()
{
    int minVal, maxVal, n, bil[100];

    cout<<"Masukkan n : ";
    cin>>n;

    minVal = n;
    maxVal = n;
    for(int i=0; i<n; i++)
    {
        cout<<"Masukkan bil ke-"<<i+1<<" = ";
        cin>>bil[i];
    }

    cout<<"\n";
    cout<<"HASIL : \n";
    for(int j=0; j<n; j++)
    {
        cout<<"Bilangan index ke-"<<j+1<<" = "<<bil[j];
        cout<<"\n";

        if(bil[j] > maxVal)
        {
            maxVal = bil[j];
        }

        if(bil[j] < minVal)
        {
            minVal = bil[j];
        }
    }

    cout<<"Nilai terbesar adalah : "<<maxVal<<"\n";
    cout<<"Nilai terkecil adalah : "<<minVal<<"\n";
}
