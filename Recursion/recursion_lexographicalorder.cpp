#include<bits/stdc++.h>
using namespace std;

void printOrder(int n, vector<string>& v) {
    //base case
    if(n==0) {
        v.push_back("0");
        return;
    }

    //recursive case
    v.push_back(to_string(n));
    printOrder(n-1,v);
}

int main() {
    int n;
    cin>>n;

    vector<string> v;

    printOrder(n,v);

    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}

