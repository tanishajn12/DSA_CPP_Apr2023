#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
void Sort(int *a, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[j] > a[i]){
                swap(a[j], a[i]);
            }
        }
    }
}

void pairofroses(int price[], int n, int money) {
    int i=0;
    int j=n-1;
    int diff, first, second, min=INT_MAX;
    while(i<j) {
        if(price[i] + price[j] == money) {
            diff = abs(price[j]-price[i]);
            if (diff<=min) {
                min=diff;
                first= price[i];
                second= price[j];
            
            }
            i++;
            j--;
        }

        if (price[i] +price[j] > money) {
            j--;
        }

        if (price[i] + price[j] <money) {
            i++;
        }
    }
    cout<< "Deepak should buy roses whose prices are "<<first<<" and "<<second<<endl;

}

int main() {
    int t;
    cin>>t; 
    int n;
    for (int i=0; i<t; i++ ) {
        cin>>n;
        int price[n];
        for(int i=0; i<n; i++) {
            cin>>price[i];
        }
        Sort(price,n);

        int money;
        cin>>money;

        pairofroses(price, n, money) ;  
        cout<<endl; 

    }
    return 0;
}

