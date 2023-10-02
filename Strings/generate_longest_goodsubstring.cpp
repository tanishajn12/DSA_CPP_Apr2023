#include<iostream>
#include<algorithm>
using namespace std;

//algorithm : time complexity : O(n^3)  space: O(1)

bool isGoodString(string str) {
    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        if(!(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')) {
            //ch is a consonant therefore str is not a good string
            return false;
        }
    }
    //str is good string
    return true;


}

int main()  {
    string str = "cbaeicdeiou";
    int n=str.size();

    int s_index;  //to track the starting index of the longest good substring  
    int max_len=0; //to track the max length of good substring

    for(int i=0; i<n; i++) {  //iterate over all possible starting indices

        //iterate over all the possible endinces indices
        for(int j=i; j<n; j++) {
            //extract the substring that starts at ith index and ends at jth index
            string subString= str.substr(i, j-i+1);

            if (isGoodString(subString)) {
                //track its length
                max_len=max(max_len, j-i+1);
                s_index= i;
            }
        }
    }
    cout<<str.substr(s_index ,max_len)<<endl;
    cout<<max_len<<endl;
    return 0;
}