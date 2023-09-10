#include<iostream>
using namespace std;

int main() {
    char str[6]={'a','b','c','d','e'};
    cout<<str<<endl;

    char str2[]="hello"; // null char \0 already inserted
    cout<<str2<<endl;

    int count=0;

    char str3[]="coding blocks";

    for(int i=0; str3[i]!='\0'; i++) {
        count++;
    }

    cout<<count<<endl;


    return 0;
}