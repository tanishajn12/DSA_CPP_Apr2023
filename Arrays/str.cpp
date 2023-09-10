#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

string isValid(string s) {
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    int n=s.length();
    for(int i=0; i<n; i++) {
        freq[int(s[i])-97]+=1;
    }

    sort(freq,freq+26);
    int first=0;
    int second=0;

    for(int i=0; i<26; i++) {
        if(freq[i]!=0) {
            first=freq[i];
            second=freq[i+1];
            break;
        }
    }

    int last=freq[25];
    int second_last=freq[24];

    if(last==first) {
        return "YES";
    }
    else if(first==1 && second==last) {
        return "YES";
    }
    
    else if(first==second_last && second_last==(last-1)) {
        return "YES";
    }

    else{
        return "NO";
    }
}

int main(){
    string s;
    cin>>s;
    cout<<isValid(s);
    return 0;
}


