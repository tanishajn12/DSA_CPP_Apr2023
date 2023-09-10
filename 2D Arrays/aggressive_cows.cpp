/* constraints : 2<=N<=10^5  , 0<=xi<=10^9   , 2<=Cows<=N */

#include<iostream>
using namespace std;

//binary search algorithm-> time complexity : O(log n)

bool canPlaceCows(int c,int n, int* pos, int m) {

    int numofCowsPlaced=1;
    int lastCowPos=pos[0];

    for(int i=1; i<n; i++) {

        //can i place the next cow in the ith stall
        if(pos[i]-lastCowPos>=m ) {

            //you can place the next stall in the ith stall
            numofCowsPlaced++;
            lastCowPos=pos[i];

            if(numofCowsPlaced==c) {
                return true;
            }
        }
    }
    return false;
}

int largestMinDist(int n, int c, int* pos) {
    int s= INT16_MAX;
    int e= pos[n-1]-pos[0];
    for(int i=1; i<n; i++) {
        if(pos[i]-pos[i-1]<s) {
            // s=pos[i]-pos[i-1];
        }
    }

    int ans;
    while(s<=e) {  //THIS LOOP takes log n time
        int m=s+(e-s)/2;

        //can you place c cows in n stalls such that the min distance b/w them is atleast m
        if(canPlaceCows(c,n,pos,m)) {

            ans=m;
            s=m+1;
        }

        else{
            e=m-1;
        }

    }
    return ans;
}

int main(){

    int c=3;  //c->number of cows
    int n=5;  //number of positions available for cow
    int pos[]={1,2,4,8,9};

    cout<<largestMinDist(c,n,pos)<<endl;


}