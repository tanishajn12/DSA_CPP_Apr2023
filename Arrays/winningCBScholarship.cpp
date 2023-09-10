#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,m,x,y;
    cin>>n>>m>>x>>y;

    int start=1, end=n, good=0;

    while(start<=end) {
        int mid=(start+end)/2;

        long long int c= m-((mid*(long long int)x)+((n-mid)*(long long int)y));

        if(c>=0) {
            good=mid;
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }


    cout<<good<<endl;
    return 0;
}