#include<iostream>
using namespace std;
 
bool recurse(string s,int i){

	if(i>=s.length()){
        return true;
    }

	if(s[i]!='a' && s[i]!='b'){
		return false;
    }

	if(s[i]=='b'){
		if((i< s.length()-1) && s[i+1]=='b'){
			return recurse(s,i+2);
        }
		else 
			return false;
	}

	return recurse(s,i+1);
}

int main() {
    string str;
    cin>>str;

    if(f(str,0)){
        cout<<"true";
    } 
    else{
        cout<<"false";
    }

    return 0;
}