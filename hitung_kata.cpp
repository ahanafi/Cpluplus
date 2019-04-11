#include<stdio.h>
#include<string>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[100];
    int i, total = 1;

    cout<<"Enter a string : ";
    gets(a);

    for(i=0; a[i] != '\0'; i++) {
        if(a[i]==' ') {
            total++;
        }
    }

    cout<<"Dari string tsb ada "<<total<<" kata ";
    string str(a);
    cout<<"Textnya adalah : "<<str;
    return 0;
}
