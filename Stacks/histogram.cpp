#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int h[n];

    for(int i=0; i<n;i++) {
        cin>>h[i];
    }

    stack<pair<int, int>>s1; 
    vector<int> nsl; //nearest smaller element towards the left

    for(int i=0; i<n; i++) {
        while(!s1.empty() && s1.top().first>=h[i]) {
            s1.pop();
        }
        if(s1.empty()) {
            nsl.push_back(-1);
        }

        else{
            nsl.push_back(s1.top().second);
        }

        s1.push({h[i],i});
    }

    stack<pair<int, int>>s2; 
    vector<int> nsr; //nearest smaller element towards the right

    for(int i=n-1; i>=0; i--) {
        while(!s2.empty() && s2.top().first>=h[i]) {
            s2.pop();
        }
        if(s2.empty()) {
            nsr.push_back(n);
        }

        else{
            nsr.push_back(s2.top().second);
        }
        s2.push({h[i],i});
    }

    // for(int i=0; i<n; i++){
    //     cout<<nsl[i]<<" ";
    // }
    // cout<<endl;
    
    // reverse(nsr.begin(),nsr.end());
    // for(int i=0; i<n; i++){
    //     cout<<nsr[i]<<" ";
    // }
    // cout<<endl;

 
    int maxArea=0;
    for(int i=0; i<n; i++) {
        int w_i=nsr[i]-nsl[i]-1;
        int a_i=h[i]*w_i;

        maxArea=max(maxArea,a_i);
    }
    cout<<maxArea<<endl;
    return 0;
}