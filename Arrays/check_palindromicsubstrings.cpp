#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string str;
    cin>>str;

    int n=str.size();
    int count=0; //count the number of palindromic strings

    for(int i=0; i<n; i++) {
        for(int j=i; j<=n-1; j++ ){
            string x=str.substr(i,j-i+1);
            string y=x;
            reverse(x.begin(), x.end());

            if(x==y) {
                count++;
            }

        }
    }
    cout<<count<<endl;
    return 0;
}

