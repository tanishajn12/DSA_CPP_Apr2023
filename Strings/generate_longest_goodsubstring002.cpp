#include<iostream>
#include<algorithm>
using namespace std;
//algorithm : time complexity : O(n) space :O(1)

bool isGoodString(string str) {
	for(int i=0; i<str.size(); i++) {
		char ch = str[i];
		if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
			// ch is a consonant therefore, str is not a good string
			return false;
		}
	}
	return true;   // str is a good string
}

int main()  {
    string str;
    cin>>str;
    int n=str.size();

    int count=0;  
    int max_len=0; //to track the max length of good substring

    for(int i=0; i<n; i++) {
        char ch=str[i];
        if ((ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u')) {
            //ch is a vowel
            count++;
            max_len=max(max_len,count);
        }
        else{
            count=0;
        }
    }
    cout<<max_len<<endl;
    return 0;
}


