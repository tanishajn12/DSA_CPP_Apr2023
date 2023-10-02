#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1;
    while (i<=n) {
        //print n-count spaces
        int j=1;
        while (j<=n-i) {
            cout<< " ";
            j++;
        }
        //print number
        
        int num=1;
        int k=1;

        while (j<=k) {
            cout <<num << " ";
            num++;
        }
        cout << "\n";
        i++;
    }
}
