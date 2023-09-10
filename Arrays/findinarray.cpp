#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int a;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>> a;
        arr[i]= a;
    }
    
    int num;
    cout<<"Enter a value: ";
    cin>>num;
    char found=false;

    for (int i=1; i<=n;i++) {
        if (arr[i]==num) {
            cout <<"The position in array is:"<<i;
            found==true;
            break;
        }    
    }
    if (found==false) {
        cout<< -1;
    }

    return 0;

}