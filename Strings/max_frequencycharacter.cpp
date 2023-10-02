#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string str;
    cin>>str;

    int count[256]= {0};
    //create array to keep the count of individual
    // characters and initialize the array as 0

    int n=str.length();
    int max=0;

    char c[n+1];
    char result;  //store the final character answer

    strcpy(c,str.c_str());  //coping string to character array

    //transversing through the character array and 
    //maintaining the count of each character
    for (int i = 0; i < n+1; i++) {
        count[c[i]]++;
        if (max < count[c[i]]) {
            max = count[c[i]];
            result = c[i];
        }
    }
    cout<<result<<endl;
}

