#include<iostream>
using namespace std;

int f (int* arr,int n, int i) {
    //base case
    if(i == n-1){
        //compute the sum of arr[n-1 ... n-1]
        return arr[n-1];
    }

    //recursive case
    //ask your friend to compute the sum of arr[i+1,n-1]

    int A= f(arr,n,i+1);
    return arr[i]+A;
}

int main() {
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);

    cout<< f(arr,n,0)<<endl;

    return 0;

}


