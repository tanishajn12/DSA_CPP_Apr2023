#include<iostream>
using namespace std;

void generateParentheses(int n ,char* out, int j, int open_cnt, int close_cnt,int& count){
    //base case
    if(open_cnt==n and close_cnt==n) { //or j==2*n;
        out[j]='\0';
        count++;
        cout<<out<<endl;
        return;
    }

    //recursive case
    //make a decision for the jth position
    //1.place opening '(' at the jth position
    if(open_cnt<n){
        out[j]='(';
        generateParentheses(n,out,j+1,open_cnt+1,close_cnt,count);
    }

    //2. place closing ')' at the jth position
    if(close_cnt<n && close_cnt<open_cnt){
        out[j]=')';
        generateParentheses(n,out,j+1,open_cnt,close_cnt+1,count);
    }
}

int main() {
    int n=3;
    int count=0;
    char out[20];
    generateParentheses(n, out ,0,0,0,count);
    cout<<count<<endl;
    return 0;
}



