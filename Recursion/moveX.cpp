#include<iostream>
using namespace std;

string move(string str){
    //base case
    if(str==""){  //str.empty() or str.size()==0
        return str;

    }
    //recursive case
    //1. extract the substring that start from 1st index
    string subString=str.substr(1); //substring starting from 1st index

    //2. ask your friend to move all the 'x' characters in the subString to the last
    string stringFromMyFriend= move(subString);

    //char ch=str[0];

    string ch=string(1,str[0]);
    if(ch=="x") {
        return stringFromMyFriend +ch;
    }
    return ch + stringFromMyFriend;
}

int main() {
    string str="xaxbxc";
    cout<<move(str)<<endl;
    return 0;
}
