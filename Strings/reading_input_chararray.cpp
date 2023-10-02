#include<iostream>
using namespace std;

int main() {
    char ch,str[1000];
    int i=0; 
    while(true) {
        ch=cin.get();
        if(ch=='\n') {
            
            break;
        }

        str[i]=ch;
        i++;
    }

}