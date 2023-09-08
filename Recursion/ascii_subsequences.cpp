#include<iostream>
using namespace std;

void f(string str, string ans) {
    //base case
    if(str.length()==0 ) {
        cout<<ans<< " ";
        return;
    }

    //recursive case
    char ch=str[0];
    int as_code=ch;
    string s=str.substr(1);

    f(s,ans);
    f(s,ans+ch);
    f(s,ans+to_string(as_code));
}

int main() {
    string str;
    cin>>str;

    string ans="";

    f(str,ans);
}

