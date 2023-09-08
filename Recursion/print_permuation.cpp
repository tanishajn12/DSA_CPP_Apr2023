#include<iostream>
using namespace std;

void generatePermutations(string str, int n, int i) {
    //base case
    if(i==n) {
        cout<<str<<" ";
        return;
    }

    //recursive case
    //generate the permation of inp[i..n-1]
    //make a decision for the ith position
    for(int j=i; j<=n-1; j++) {
        swap(str[i],str[j]);
        generatePermutations(str,n,i+1);
        swap(str[i],str[j]);
    }
}

int main() {
    string str;
    cin>>str;
    int n=str.size();
    generatePermutations(str,n,0);
    return 0;

}



