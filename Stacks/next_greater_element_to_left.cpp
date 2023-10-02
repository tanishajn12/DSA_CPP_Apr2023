#include<iostream>
#include<stack>
using namespace std;

// time : O(n) space : O(n) (in the worst-case when array is in the inc. 
//order stack size is n, no one will be popped)
int main() {
    int A[]= {5,2,0,4,1,3,6};
    int n=sizeof(A)/ sizeof(int);

    stack<int> s;

    for(int i=0; i<=n-1; i++) {
        while(!s.empty() && s.top() < A[i]) {
            s.pop();
        }

        if(s.empty()){
            //there is no greater element towards the right of 
            //the element at ith index
            cout<<-1<< " "; 

        }

        else{
            cout<<s.top()<< " ";
            
        }

        s.push(A[i]);
    }

    return 0;
}

