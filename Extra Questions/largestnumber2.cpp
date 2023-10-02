#include<iostream>
#include<climits>

using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n:" ;
    cin>>n;

    int lsf= INT_MIN;  //to store Largest number so far

    int i=0;
    while (i<n) {
        int data;
        cin>>data;

        if (data>lsf) {
            lsf=data;
        }
        i=i+1;
    }
    cout << "Largest Number is :"<< lsf<< endl;
    return 0;
}






