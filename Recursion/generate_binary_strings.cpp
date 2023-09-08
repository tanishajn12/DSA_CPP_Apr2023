#include<bits/stdc++.h>
using namespace std;

void generateBinaryStrings(string str, int index) {
    if(index==str.size()) {
        cout<<str <<endl;
        return;
    }

    if(str[index]=='?') {
        //replace '?' by '0' and recurse
        str[index]='0';
        generateBinaryStrings(str,index+1);

        //replace '?' by '1' and recurse
        str[index]='1';
        generateBinaryStrings(str,index+1);
    }

    else{
        generateBinaryStrings(str,index+1);
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        string str;
        cin>>str;

        generateBinaryStrings(str,0);
        return 0;
    }
}

