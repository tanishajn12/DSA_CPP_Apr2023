#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int>& arr, int i,int sum, int target, vector<int>& subset) {
    if (sum==target) {
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << "  ";
        return;
    }

    if (i==arr.size()) {
        return;
    }

    // Exclude current element
    printSubsets(arr, i+1, sum,target, subset);

    // Include current element
    subset.push_back(arr[i]);
    printSubsets(arr, i+1,sum+arr[i], target, subset);
    subset.pop_back();
}

int countSubsets(vector<int>& arr, int n, int target) {
    if (target == 0) {
        return 1;
    }

    if (n == 0) {
        return 0;
    }

    // Exclude current element
    int count = countSubsets(arr, n-1, target);

    // Include current element
    count += countSubsets(arr, n-1, target - arr[n-1]);

    return count;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    vector<int> subset;
    printSubsets(arr, 0,0,target, subset);
    cout<<endl;

    int count = countSubsets(arr, n, target);
    cout << count << endl;

    return 0;
}