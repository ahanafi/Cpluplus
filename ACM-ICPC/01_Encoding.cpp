#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>

using namespace std;

string convertToEncoding(string chr){
    string listChar[26] = {"a","b","c","d","e", "f", "g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","z"};
    string listEnc[26] = {"ei","bi","si","di","i","ef","dei","eitf","ai", "djei", "kei", "el", "em", "en", "ou", "pi", "kiu", "ar", "es", "ti", "ju", "vi", "dabelju", "eks", "wai", "zi"};
    int sizearr = sizeof(listChar)/sizeof(listChar[0]);
    for(int i=0; i <= sizearr; i++) {
        if(chr == listChar[i]){
            return listEnc[i];
        }
    }
}

int countManyChar(string text) {
    int totalString = 0, totalAlphabet = 0;
    char *array_points;
    char char1;
    char string_array[100];
    strcpy(string_array, text.c_str());

    for(array_points = string_array; *array_points != '\0'; array_points++)
    {
        char1 = *array_points;
        totalString++;
        if(isalpha(char1)){
            totalAlphabet++;
        }
    }

    return totalAlphabet;
}

main()
{
    string strText;
    cout<<"Type string here : ";
    getline(cin, strText);

    //Hitung banyaknya huruf dalam 1 kata
    int manyChar = countManyChar(strText);
    string tempData[manyChar];

    //Konversi huruf
    for(int x=0; x <= manyChar; x++) {
        string sym(1, strText[x]);
        string theval = sym.c_str();

        if(theval != " "){
            tempData[x] = convertToEncoding(theval);
        } else {
            tempData[x] = " ";
        }
    }

    //Tampilkan hasilnya
    for(int a=0; a <= manyChar; a++) {
        cout<<tempData[a];
    }

    return 0;
}
