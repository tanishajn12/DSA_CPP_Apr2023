#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> result;
    int n = nums.size();

    if(n<3) {
        return result; //not enough elements to form triplets
    }

    int l,r;
    sort(nums.begin(),nums.end());
    
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; // Skip duplicates
        }

        int target = -nums[i];
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});

                while (left < right && nums[left] == nums[left + 1]) {
                    left++; // Skip left duplicates
                }
                while (left < right && nums[right] == nums[right - 1]) {
                    right--; // Skip right duplicates
                }
                left++;
                right--;
            } 
            
            else if (sum < target) {
                left++;
            } 
            
            else {
                right--;
            }
        }
    }

    return result;
}

int main() { 
    vector<int> nums = { -1, 0, 1, 2, -1, -4 };
    vector<vector<int>> result = threeSum(nums);
    
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < 3; j++) {
            cout << result[i][j];
            if (j < 2) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
} 

