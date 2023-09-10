#include <bits/stdc++.h>
using namespace std;

string isValid(string s) {
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    int n=s.length();
    cout<<n<<endl;

    for(int i=0; i<n; i++) {
        freq[int(s[i]-97)]+=1;
    }

    int count=0;

    for(int i=0; i<26;i++) {
        if(freq[i]==2) {
            count++;
        }
    }

    cout<<count;

    if(count==1) {
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }
}

int main(){
    string s;
    cin>>s;
    string result = isValid(s);

    cout << result << "\n";
    return 0;
}
