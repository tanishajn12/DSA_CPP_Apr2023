#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[]="hello";
    cout<<"Orgininal string : "<<str<<endl;

    int count=0;
    int a=0;
    while(str[a]!='\0') {
        count++;   
        a++;
    }

    int i=0;
    int j=count-1;
    while (i<j) {
        swap(str[i],str[j]);
        i++;
        j--;
    }

    cout<<"Reversed String : "<<str<<endl;
    cout<<strrev(str);
    
}

