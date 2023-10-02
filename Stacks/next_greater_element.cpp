#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

// time : O(n) space : O(n) (in the worst-case when array is in the inc. 
//order stack size is n, no one will be popped)

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[100005];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        vector<int> ans;

        stack<int> s;

        for(int i=n-1; i>=0; i--) {
            while(!s.empty() && s.top() < arr[i]) {
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

            s.push(arr[i]);
        }

        reverse(ans.begin(),ans.end());

        for(int i=0; i<ans.size(); i++) {
            cout<<arr[i]<<","<<ans[i]<<endl;
        }
    }

    return 0;
}

