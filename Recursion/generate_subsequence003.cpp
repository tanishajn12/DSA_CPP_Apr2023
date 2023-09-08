#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string input, string output,vector<string>& v){
    // Base Case
    // if the input is empty print the output string
    if (input.empty()) {
        v.push_back(output);
        return;
    }
    // output is passed with including the Ist character of
    // Input string
    printSubsequence(input.substr(1), output + input[0],v);
 
    // output is passed without including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output,v);
}

int main(){
    string output = "";
    string input="abc";
    vector<string> v;
    printSubsequence(input, output,v);
    reverse(v.begin(),v.end());

    int count=0;
    for(int i=0; i<v.size() ; i++) {
        cout<<v[i]<<" ";
        count++;
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}



