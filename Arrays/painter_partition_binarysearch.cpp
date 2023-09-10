#include<iostream>
#include<climits>
using namespace std;

int numPaintersRequired(int n, int* b, int timeLimit) {
    int numPainters=1;
    int time=0;
    int i=0;

    while(i<n) {
        //paint the ith board
        time +=b[i];

        if(time>timeLimit) {
            //add a new painter to job
            numPainters++;
            time=0; //reset the time since works in parallel and share the same clock
            continue;
        }
        i++;
    }

    return numPainters;
}

int getMinTime(int k, int n, int* b) {
    int s= INT_MIN; //for the tighest upper bound assign a painter to each board
    int e=0; //for the tighest upper-bound , assign a single painter to paint all the boards

    for(int i=0; i<n; i++) {
        s=max(s,b[i]);
        e+=b[i];
    }

    int ans;
    while(s<=e) {
        int m= s+(e-s)/2;
        int x= numPaintersRequired(n,b,m) ;
        if(x<=k) {
            //k painters can also paint 'n' boards in 'm' amount of time
            ans=m;

            //since we want to minimize the time,continue your search towards the left
            //of m ie the search space reduces from  [s,e]=[s,m-1]
            e=m-1;
        }

        else{
            //k painters cannot paint n boards in m amount of time therefore continue your search towards the 
            //right of m ie the search space reduces from [s,e] to [m+1,e]
            s=m+1;
        }
    }
    return ans;
}

int main() {
    int k;  //input number of painters
    cin>>k;

    int n;
    cin>>n; //input number of boards available to painters

    int* b= new int[n]; //declaring the array of type int 
   
    for(int i=0; i<n; i++) { //input values of array.
        cin>>b[i];
    }

    cout<<getMinTime(k,n,b)<<endl;
    return 0;
}

