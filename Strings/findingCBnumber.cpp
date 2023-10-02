#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int primes[]={2,3,5,7,11,13,17,23,29};

bool isCBNumber(string str) {
    long long num=stoll(str) ;  //stoll-> string to long long
    if(num==0 || num==1) {
        //str is not a CB number
        return false;
    }

    for(int i=0; i<9; i++) {
        if(num==primes[i]) {
            //str is a CB number
            return true;
        }
    }
    for(int i=0; i<9; i++) {
        if(num%primes[i]==0) {
            //str is not a CB number
            return false;
        }
    }

    return true;
}

bool isvalid(int* arr, string str, int start,int end){
    for(int i=start; i<end;i++){
        if(arr[i]==1){
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    cin>>n; //input the length of string

    string str;
    cin>>str;

    int arr[str.length()];

    for(int i=0; i<str.length(); i++) {
        arr[i]=0;
    }

    int count=0; //count the number of CB numbers
    
    //iterate over all possible starting indices
    for(int l=1; l<=n; l++) {
        
        //iterate over all possible ending indices
        for(int i=0; i<=n-l; i++) {
            string s=str.substr(i,l);
           
            if (isCBNumber(s)==true && isvalid(arr,s, i, i+l)) {
                count++;
                for(int k=i; k<=i+l-1; k++) {
                    arr[k]=1;
                } 
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

//for a string o