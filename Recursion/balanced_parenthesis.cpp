#include<bits/stdc++.h>
using namespace std;

char findClosing(char c) {
    if(c=='('){
        return ')';
    }

    if(c=='{'){
        return '}';
    }

    if(c=='['){
        return ']';
    }

    else{
        return -1;
    }
}

bool checkBalanced(char arr[], int n) {
    //base case
    if(n==0) {
        return true;
    }

    if(n==1) {
        return false;
    }

    if(arr[0]==')' || arr[0]==']' || arr[0]=='}') {
        return false;
    }

    char closing =findClosing(arr[0]) ; //search for closing bracket for first opening bracket

    int i=0;
    int count=0;

    for(int i=1; i<n; i++) {
        if(arr[i]==arr[0]) {
            count++; //handle cases like ((()))
        }

        if(arr[i]==closing) {
            if(count==0) {
                break;
            }
            count--;
        }
    }

    if(i==n) {
        return false; //not found closing bracket
    }

    if (i == 1){
        return checkBalanced(arr + 2, n - 2); //closing bracket was next to open
    }

    return checkBalanced(arr+1,i-1) && checkBalanced(arr+i+1,n-i-1);

}

int main()
{
    char arr[] = "[a+{b+(c+d)+e}+f]"
    int n = strlen(arr);

    if (checkBalanced(arr, n)){
        cout << "Balanced";
    }
    
    else{
        cout << "Not Balanced";
    }

    return 0;
}