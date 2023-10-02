#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> findNextGreaterNumbers(int N,vector<int>& arr) {

    vector<int> result(N, -1); // Initialize result array with -1
    stack<int> s; // Stack to store indices of elements

    // First iteration to find next greater numbers for each element
    for (int i = 0; i < 2 * N; i++) {
        int num = arr[i % N];

        while (!st.empty() && arr[st.top()] < num) {
            result[st.top()] = num;
            st.pop();
        }

        if (i < N)
            st.push(i);
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<int> result = findNextGreaterNumbers(N, arr);

    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}
