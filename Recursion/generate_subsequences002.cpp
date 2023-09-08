#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void generateSubsequence(char*inp, char* out, int i, int j, vector<string>& v){
    //base case
    if(inp[i]=='\0') { //pr i==n
        out[j]='\0';
        v.push_back(string(out)); //out is character array hence trans
        return;
    }
    // recursive case
	// generate all the subsequences of inp[i...n-1] i.e. take a sequence of (n-i) decision
	// take a decision for the character at the ith index

	// 1. include the ith character to the output subseq.
	out[j] = inp[i];
	generateSubsequence(inp, out, i+1, j+1, v);

	// 2. exclude the ith character from the output subseq.
	generateSubsequence(inp, out, i+1, j, v);
}


int main(){
    char inp[100];
    cin.getline(inp,100);

    char out[10];
    vector<string>v;
    generateSubsequence(inp,out,0,0,v);

    int n=v.size();
    int count=0;
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
        count++;
    }  

    cout<<count<<endl;
    return 0;
}

