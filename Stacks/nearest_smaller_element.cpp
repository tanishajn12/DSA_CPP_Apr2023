#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {
    int A[]={0,3,5,4,1,6,2} ;
    int n=sizeof(A)/sizeof(int);

    stack<pair<int, int>> s;
    vector<int> ans;

    for(int i=0; i<n; i++) {
        while(!s.empty() && s.top().first>=A[i]) {
            s.pop();
        }

        if(s.empty()) {
            ans.push_back(-1);
        }

        else{
            ans.push_back(s.top().second);
        }

        s.push({A[i],i});
    }

    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }

    return 0;

}


