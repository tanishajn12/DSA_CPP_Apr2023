#include<bits/stdc++.h>
using namespace std;

void findTriplets(vector<int>& A, int sum,int index, vector<int>& current,vector<vector<int>>& ans){
    if(sum==0 && current.size()==3) {
        ans.push_back(current);
        return;
    }

    if(index>=A.size()){
        return ;
    }

    // Include the current element
    current.push_back(A[index]);
    findTriplets(A, sum - A[index], index + 1, current, ans);
    
    current.pop_back();
    // Skip duplicates
    while (index + 1 < A.size() && A[index] == A[index + 1]) {
        index++;
    }

    // Exclude the current element
    findTriplets(A, sum, index + 1, current, ans);
}  

vector<vector<int>> threeSum(vector<int>& A, int sum) {
    vector<vector<int>> ans;
    vector<int> current;
    sort(A.begin(), A.end());
    findTriplets(A, sum, 0, current, ans);
    return ans;
}


int main() { 
    vector<int> A= {-1,0,1,2,-1,-4 }; 
    int sum = 0; 
    
    vector<vector<int>> ans=threeSum(A,sum);
   
    for (const vector<int>& triplet : ans) {
        cout << "[";
        for (int i = 0; i < 3; i++) {
            cout << triplet[i];
            if (i < 2) {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }

    return 0; 
} 


