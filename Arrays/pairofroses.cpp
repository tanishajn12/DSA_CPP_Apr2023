#include<iostream>
#include<climits>
using namespace std;


int main() {
    int t; //input no of test cases
    cin>>t;

    cout<<endl;
 
    while(t>0){

        //input number of available roses
        int n;
        cin>>n;
        
        long long int price[n]; //storing prices of available roses
        for(int j=0; j<n; j++)  {
            cin>>price[j];
        }

        int m;
        cin>>m;
        cout<<endl;

        for (int i=1; i<=n-1; i++) {
            int key= price[i];
            int j= i-1;
            while(j>=0 && price[j]>key) {
                price[j+1] = price[j];
                j--;
            }
            price[j+1]= key;
        }
    
        for(int i=1; i<n; i++) {
            for(int j=i+1; i<n-1; i++) {
                if (price[i]+price[j]==m) {
                    cout<<"Deepak should buy roses whose prices are "<<price[i]<<" and "<<price[j]<<endl;
                }
            }
        }
        t--;
    }
    return 0;


}
