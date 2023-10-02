#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;

    for(int i=0;i<str.length();i++) {
        int y= str[i];
        if(i%2!=0){
            //Replace odd character with the character having 
            //just lower ASCII code
            char x=str[i];  
            x--;
            str[i]=x;
        }

        else {
            //Replace even character with the character having 
            //just higher ASCII code
            char x=str[i];
            x++;
            str[i]=x;
        }
    }  
    cout<<str<<endl;
}

