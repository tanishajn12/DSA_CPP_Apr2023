#include<iostream>
#include<stack>
using namespace std;

// time : O(n) space : O(n) (in the worst-case when array is in the inc. 
//order stack size is n, no one will be popped)
void nextGreater(int arr[100005], int n) {

    stack<int> s;
    
    //push the first element to stack
    s.push(arr[0]);

    for(int i=1; i<n; i++) {
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }

        //if stack is not empty then pop element from stack.If the popped element
        //is smaller than next, then print the pair
        while(!s.empty() && s.top() < arr[i]) {
            cout<<s.top() << " "<< arr[i] <<endl;
            s.pop();
        }
        s.push(arr[i]);
    }

    //remaining elements in stack do not have next greater elements
    //hence print -1
    while(s.empty()==false) {
        cout<<s.top() << " "<<-1<<endl;
        s.pop();
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int arr[100005];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        nextGreater(arr,n);
    }

    return 0;
}