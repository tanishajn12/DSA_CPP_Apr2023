#include<iostream>
using namespace std;

string keypad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void generateWords(char* inp,char* out, int i, int j) {
    //base case
    if(inp[i]=='\0') {//i==n
        out[j]='\0';
        cout<< out<<" ";
        return;  
    }

    //recursive case: generate the words for inp[i...n-1]
    //decide for the digit at the ith index,that which character
    //it is marked to in the keypad dictionary
    int d= inp[i]-'0';
    if(d==0 || d==1) {
        //skip the ith digit
        generateWords(inp,out,i+1,j);
        return;
    }

    string options =keypad[d];
    for(char c : options) {
        out[j]=c;
        generateWords(inp,out,i+1,j+1);
    }

}

int main() {
    char inp[]="023";
    char out[10];
    generateWords(inp,out,0,0);
    return 0;
}







