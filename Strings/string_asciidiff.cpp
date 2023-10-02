#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    cin>>str;

    int n=str.length();

    char prev=str[0];

    for(int i=0; i<n; i++) {
        if (i==0) {
            cout<<str[0];
        }
        else{
            cout<<(int(str[i])-int(prev))<<str[i];
            prev= str[i];

        }
    }
    return 0;
}

