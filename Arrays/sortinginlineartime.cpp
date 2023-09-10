#include<iostream>
using namespace std;

void swap (int arr[], int i, int j){

    int temp= arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void display (int arr[],int size){
    for (int i=0;i<size;  i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
  cin>>arr[i];
    }
