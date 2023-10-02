#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();

    int i=0;
    string c = "";

    while(i<n){
        if (s[i]!=s[i+1]){
            c += s[i];
        }

        i++;
    }

    c += s[n];

    for (int i = 0; i < c.size() - 1; i++) {
        cout<<c[i];
    }
}

