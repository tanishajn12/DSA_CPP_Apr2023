#include<iostream>
using namespace std;

int stringToInteger(string str,int n) {
    //base case
    if(n==0) {
        //transform empty string into an integer 
        //and the integer value corr to an empty string is 0
        return 0;
    }
    //or str==""" (base case)

    //recursive case
    //1.extract the substring that starts at the 0th index and length of n-1
    string substring= str.substr(0,n-1);

    //2.ask your friend to transform the substring into an integer
    int intergerFromMyFriend= stringToInteger(substring,n-1);
    return intergerFromMyFriend*10+(str[n-1]-'0');
}

int main() {
    string str="12345";
    int n=str.size();
    int x= stringToInteger(str,n);
    cout<<x<<endl;

    return 0;
}

