#include<bits/stdc++.h>
using namespace std;

void find3numbers(int A[], int n, int sum, vector<int>& s,set<vector<int>>& ans){
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(A[i]+A[j]+A[k]==sum) {
                    s.clear();
                    s.push_back(A[i]);
                    s.push_back(A[j]);
                    s.push_back(A[k]);
                    sort(s.begin(), s.end());
                    ans.insert(s);
            
                }
            }
        }
    }
}  

int main() { 
    int A[] = {-1,0,1,2,-1,-4 }; 
    int sum = 0; 
    int n = sizeof(A) / sizeof(A[0]); 
    vector<int> s;
    set<vector<int>> ans;
    find3numbers(A, n, sum, s,ans); 
    
    cout << "[";
    bool first = true;
    for (const vector<int>& triplet : ans) {
        if (!first) {
            cout << ",";
        }
        cout << "[";
        for (int i = 0; i < 3; i++) {
            cout << triplet[i];
            if (i < 2) {
                cout << ",";
            }
        }
        cout << "]";
        first = false;
    }
    cout << "]" << endl;
    return 0; 
} 

