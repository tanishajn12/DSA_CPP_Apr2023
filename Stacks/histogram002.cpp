#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int h[]={2,1,5,6,2,3};
    int n=sizeof(h)/sizeof(int);

    deque<pair<int, int>>s; //i am using a deque object as stack 
    vector<int> nsl; //nearest smaller element towards the left

    for(int i=0; i<n; i++) {
        while(!s.empty() && s.back().first>=h[i]) {
            s.pop_back();
        }
        if(s.empty()) {
            nsl.push_back(-1);
        }

        else{
            nsl.push_back(s.back().second);
        }

        s.push_back({h[i],i});
    }

    s.clear(); 
    vector<int> nsr; //nearest smaller element towards the right

    for(int i=n-1; i>=0; i--) {
        while(!s.empty() && s.back().first>=h[i]) {
            s.pop_back();
        }
        if(s.empty()) {
            nsr.push_back(n);
        }

        else{
            nsr.push_back(s.back().second);
        }
        s.push_back({h[i],i});
    }
 
    int maxArea=0;
    for(int i=0; i<n; i++) {
        int w_i=nsr[i]-nsl[i]-1;
        int a_i=h[i]*w_i;

        maxArea=max(maxArea,a_i);
    }
    cout<<maxArea<<endl;
    return 0;
}

