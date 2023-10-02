#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

// time : O(n) space : O(n) (in the worst-case when array is in the inc. 
//order stack size is n, no one will be popped)

int main() {
    int A[]= {5,3,6,7,2,1,4};
    int n=sizeof(A)/ sizeof(int);
    vector<int> ans;

    stack<int> s;

    for(int i=n-1; i>=0; i--) {
        while(!s.empty() && s.top() < A[i]) {
            s.pop();
        }

        if(s.empty()){
            //there is no greater element towards the right of 
            //the element at ith index
            //cout<<-1<< " "; 
            ans.push_back(-1);
        }

        else{
            //cout<<s.top()<< " ";
            ans.push_back(s.top());
        }

        s.push(A[i]);
    }

    reverse(ans.begin(),ans.end());

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }

    return 0;
}

