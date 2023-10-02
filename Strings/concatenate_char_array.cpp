#include<iostream>
#include<cstring>
using namespace std;

stringConcatenate(char* str1, char* str2) {
    int i=strlen(str1);
    int j=0;
    
    while(str2[j] != '\0') {
        str1[i]= str2[j];
        i++;
        j++;
    }

    str1[i]= '\0';

}

int main() {
    char str1[101]="coding";
    char str2[101]= "blocks";
    cout<<"Before Concatenation str1 : "<<str1<<endl;
    cout<<"Before Concatenation str2 : "<<str2<<endl;

    stringConcatenate(str1,str2);

    cout<<"After Concatenation str1 : "<<str1<<endl;
    return 0;

}

