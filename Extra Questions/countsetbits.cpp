#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n;
    cout<<"Enter a number :" ;
    cin>>n;
    int count=0; //track the no of set bits in 'n'     
    
    for (int k=0; k<ceil(log2(n+1)); k++) {
        //check if kth bit is set or not

        if ((n>>k) &1) {
            //or (1<<k)&n
            count++;
        }
    }
    cout<<"Number of set Bits : "<<count<<endl;
    return 0;
}


