#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    cin>>str;

    int n=str.length();
    char prev= str[0];
    cout<<str[0];

    for(int i=1; i<n ; i++) {
        if (str[i]==prev) {
            continue;
        }
        else{
            cout<<str[i];
        }

        prev=str[i];
    }
    return 0;
}
