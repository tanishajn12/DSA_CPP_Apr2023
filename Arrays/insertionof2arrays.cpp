#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    long int n;
    cin>>n;

    long arr[n];
    long brr[n];

    int ans[100001];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        cin>>brr[i];
    }

    sort(arr, arr+n);  //sort both the arrays
    sort(brr, brr+n);

    int count = 0; //number of elements in answer array
    int k = 0; //index of answer array
    int i = 0;
    int j = 0;

    while (i < n and j < n) {

        if (arr[i] == brr[j]) {
            ans[k] = arr[i];
            i++;
            j++;
            k++;
            count++;
        }

        else if (arr[i] < brr[j]) {
            i++;
        }

        else {
            j++;
        }
    }

    cout<<"[";
    for (int i = 0; i < count; ++i)
    {
        if (i == count - 1) {
            cout<<ans[i];
        }

        else {
            cout<<ans[i]<<", ";
        }
    }

    cout<<"]";
    return 0;
}


