#include<iostream>
#include<stack>
using namespace std;

//function to swap two elements
void swap(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}

//partition func for quick sort
int partition(int arr[],int s, int e){
    int pivot=arr[e];
    int i=s-1;

    for(int j=s; j<=e; j++) {
        if(arr[j]<=pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[e]);
    return i+1;
}

// Iterative Quick Sort function
void quickSortIterative(int arr[], int s, int e) {
    stack<int> st;
    st.push(s);
    st.push(e);

    while(!st.empty()) {
        e=st.top();
        st.pop();
        s=st.top();
        st.pop();

        int pivotindex=partition(arr,s,e);

        if(pivotindex-1>s) {
            st.push(s);
            st.push(pivotindex-1);
        }
        if(pivotindex+1<e) {
            st.push(pivotindex+1);
            st.push(e);
        }


    }
}

int main() {
    int arr[] = {9, 5, 1, 8, 3, 2, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quickSortIterative(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}