#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

bool canPlaceCows(int c,int n, int* pos,int m) {
    
    int numOfCowsPlaced=1;
    int lastCowPos=pos[0];

    for(int i=1; i<n; i++) {
        //can i place the next cow in the ith stall

        if(pos[i]-lastCowPos>=m) {
            //you can place the next cow in the ith stall
            numOfCowsPlaced++;
            lastCowPos=pos[i];

            if(numOfCowsPlaced==c) {
                return true;
            }
        }
    }
    return false;

}

int largestMinDist(int n ,int c, int* pos) {
    int s=INT_MAX;  //for the tighest lower-bound, place the two cows in stalls closest to each other
    int e=pos[n-1]-pos[0]; //for the tighest upper-bound, place the two cows at the extreme positions

    for(int i=1; i<n; i++) {
        if(pos[i]-pos[i-1]<s) {
            s=pos[i]-pos[i-1];
        }
    }

    int ans;
    while(s<=e) {
        int m= s+(e-s)/2;

        //can you place 'c' cows in 'n' stalls such that
        //the minimum distance btw them is at least 'm'?

        if(canPlaceCows (c,n,pos,m)){
            //you can place c cows in 'n' stalls

            ans=m;
            //since we want to find the largest minimum distance b/w the cows, continue your search towards 
            // the right of 'm' i.e search space reduces from [s,e] to [m+1,e]
            s=m+1; 
        }

        else{
            //you cannot place 'c' cows in 'n' stalls at the minimum distance of 'm', therefore continue your
            //search space reduces from [s,e] to [s,m-1].
            e=m-1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    int n,c;
    //n: number of stalls & c: number of cows

    int pos[100];  //defining the position array
    while(t--) {
        cin>>n>>c;
        for(int i=0; i<n; i++) {
            cin>>pos[i];
        }

        sort(pos,pos+n);
        cout<<largestMinDist(n,c,pos)<<endl;

        return 0;
    }
}
