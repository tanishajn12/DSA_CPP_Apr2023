#include<iostream>
using namespace std;

void generateOutcomes(int n, char* out, int i, int j) {
    //base case
    if(i==n ) {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case
    //1. ith coin can be head
    if(i==0  || out[j-1]!='H') {
        //i==0  deciding for 1st coin
        //out[j-1]!=H 
        out[j]='H';
        generateOutcomes(n,out, i+1,j+1);
    }

    //2. ith coin can be tails
    out[j]='T';
    generateOutcomes(n,out, i+1,j+1);

}

int main() {
    int n=3;

    char out[10];

    generateOutcomes(n,out,0,0) ;

    return 0;
}


