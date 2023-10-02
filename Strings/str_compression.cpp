#include<iostream>
using namespace std;

int main() {
    string str;
    cin>>str;

    if(str.length()==1) {
        cout<<str<<"1";
    }

    for(int i=0; i<str.length(); i++) {
        int count=1;
        for(int j=i+1; j<str.length(); j++) {
            if(str[i]==str[j]) {
                count++;
            }
            else{
                break;
            }
        }

        if(count==1) {
            cout<<str[i];
        }
        else{
            cout<<str[i]<<count; 
        }
        i=i+count-1;
    }
    return 0;
}

