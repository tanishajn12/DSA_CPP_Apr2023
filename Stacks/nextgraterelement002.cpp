#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector <int> next_greater(int n, vector<int>& arr) {
    vector<int> result(n,-1);
    //make a result vector of size same as arr and initialize it with -1

    stack<int> s;

    //first pass
    for(int i=0; i<n; i++) {
        while(!s.empty() && arr[i]> arr[s.top()]) {
            int index=s.top();
            s.pop();
            result[index]=arr[i];
        }
        s.push(i);
    }

    //second pass
    for(int i=0; i<n; i++) {
        while(!s.empty() && arr[i]> arr[s.top()]) {
            int index=s.top();
            s.pop();
            result[index]=arr[i];
        }
        s.push(i);

    }
    return result;
}

int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    vector<int> result=next_greater(n,arr);

    for(int i=0; i<n; i++) {
        cout<<result[i]<<" ";
    }

    return 0;

}


