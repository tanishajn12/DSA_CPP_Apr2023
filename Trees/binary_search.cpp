#include<bits/stdc++.h>
using namespace std;
 
int binarySearch(int* arr,int x,int s,int e){
    while(s <=e){
        int m = s + (e - s)/2;
 
        if (arr[m] == x){
            return m;
        }
 
        else if (arr[m] < x){
            s = m + 1;
        }
        
        else{
            e = m - 1;
        }
    }
    return -1;
}
 
int main(){
    int arr[] = {2, 4, 5, 17, 14, 7, 11, 22};
    int x = 22;
    int n = sizeof(arr) / sizeof(int);
 
    int result = binarySearch(arr, x, 0,n );
 
    if (result != -1){
        cout << "Found at index :"<<result << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    return 0;
}

 