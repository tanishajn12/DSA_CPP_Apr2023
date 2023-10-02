#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count =0; //track the number of set bits

    for (int k=0; k<=ceil(log2(n+1)); k++) {  //or use k<32
        //check if the kth bit of n is set

        if ((n>>k)&1) {
            count ++;
        }
    }
    cout <<"Number of set bits : "<<count <<endl;
    return 0;

}