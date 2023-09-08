#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int>& nums, int target, vector<int>& current, int index) {
    // Base case: if the current subset sum is equal to the target, print the subset
    if (target == 0) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << "  ";
        return;
    }

    // Base case: if all elements are processed or target becomes negative, return
    if (index == nums.size() || target < 0) {
        return;
    }

    // Recursive case: include the current element in the subset
    current.push_back(nums[index]);
    findSubsets(nums, target - nums[index], current, index + 1);

    // Recursive case: exclude the current element from the subset
    current.pop_back();
    findSubsets(nums, target, current, index + 1);
}

int countSubsets(vector<int>& nums, int target, int index) {
    // Base case: if the target is reached, return 1
    if (target == 0) {
        return 1;
    }
    // Base case: if all elements are processed or target becomes negative, return 0
    if (index == nums.size() || target < 0) {
        return 0;
    }

    // Recursive case: count subsets including the current element + count subsets excluding the current element
    return countSubsets(nums, target - nums[index], index + 1) + countSubsets(nums, target, index + 1);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    vector<int> nums(N);
    cout << "Enter the array elements: ";
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;

    cout << "Subsets that sum to target: " << endl;
    vector<int> current;
    findSubsets(nums, target, current, 0);

    cout<<endl;
    cout << "Number of subsets that sum to target: ";
    int count = countSubsets(nums, target, 0);
    cout << count;
    return 0;
}


