#include<iostream>
#include<stacks>
#include<vector>
#include<algorithm>

using namespace std;

void nextGreater(int arr[], int n) {
    stack<int> s;
    vector<int> ans(n);

    for(int i=2*n-1 ; i>=0; i--) {
        while(!s.empty() && a[i%n]>=s.top()) {
            s.pop();
        }

        if(i<n) {
            if(!s.empty()) {
                ans[i]=s.top();
            }

            else{
                ans[i]=-1;
            }
        }

        s.push(a[i%n]);
    }

    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

}

int main(){
    int arr[] = { 8, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, N);
    return 0;
}