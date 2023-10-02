#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string str;
    cin>>str;

    bool val= next_permutation(str.begin(),str.end());
   
    if(val==false) {
        cout<<"No word Possible"<<endl;
    }

    else {
        cout<<str<<endl;
    }
    return 0;
}

