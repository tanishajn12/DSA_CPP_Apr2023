#include<iostream>
using namespace std;

int main() {
    int lower=0;   //lowercase letters count
    int upper=0;   //uppercase letters count
    int digit=0;   //digit count
    int space=0;   //white spaces, new line character count
    int sym=0;     //special symbols

    char ch;
    while (true) {
        ch=cin.get() ;

        if (ch=='$') {
            break;
        }
        if (ch>='A' &&  ch<='Z') {
            upper++;      }
        else if (ch>='a' & ch<='z') {
            lower++; }
        else if (ch>='0' && ch<='9') {
            digit++; }
        else if (ch== ' ' || ch=='\n' || ch== '\t') {
            space++; }
        else {
            sym++; }
    }
    cout <<"Uppercase count: "<< upper<<endl;
    cout <<"Lowercase count: "<< lower<<endl;
    cout <<"Digit: "<< digit<<endl;
    cout<< "Blank Spaces :"<< space<<endl;
    cout<<"Special Symbols count: "<<sym<<endl; 
    return 0;

}




