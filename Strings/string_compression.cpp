#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
    string str;
    cin>>str;

    string newstr = " ";

    int n=str.length();
    int count=0;
    char prevChar=str[0];

    for(int i=1; i<=n; i++){
        //if the last character is same as the current character
        //increment count

        if(str[i]==prevChar) {
            count++;
        }

        else{
            //insert the character count and update the last character
            if(count==1) {
                newstr+= prevChar;
            }
            
            else{
            newstr+= prevChar + to_string(count);
            prevChar= str[i];
            count=1;
            }
        }

    }
    cout<<newstr<<endl;
    return 0;
}