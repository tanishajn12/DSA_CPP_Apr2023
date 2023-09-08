#include<iostream>
using namespace std;

void generateSubsequences(char* inp, char* out, int i, int j, int& count) {
    //base case
    if(inp[i]=='\0') {
        out[j]='\0';
        cout<<out<<endl;
        count++;
        return;
    }
    //recursive case
    //make a decision for the character at the ith index
    //1. include the character at the ith index to the output subsequence
    out[j]=inp[i];
    generateSubsequences(inp,out,i+1,j+1,count);

    //2. exclude the character at the ith index from the output subsequences
    generateSubsequences(inp,out,i+1,j,count);
}

int main() {
    char inp[]="abc";
    char out[10];
    int count=0;
    generateSubsequences(inp,out,0,0,count); 
    //inp char array,output char array, initial value of i, initial value of j

    cout<<count<<endl;
    return 0;
}


