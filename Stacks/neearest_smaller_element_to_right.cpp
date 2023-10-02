#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int A[]={2,5,1,3,6,4,0} ;
    int n=sizeof(A)/sizeof(int);

    stack<pair<int, int>> s;
    vector<int> ans;

    for(int i=n-1; i>=0; i--) {
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

    reverse(ans.begin(),ans.end()) ;
    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }

    return 0;

}


