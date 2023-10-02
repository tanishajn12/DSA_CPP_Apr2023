#include<iostream>
#include<cstring>
using namespace std;

int stringCompare(char* str1, char* str2) {
    int i=0;  //to iterate over characters of str 1
    int j=0;   //to iterate over characters of str 2

    while(str1[i]!='\0' and str2[j]!='\0') {
        if(str1[i]>str2[j]) {
            //str1 is greater than str2
            return 1;
        }

        else if(str1[i]<str2[j]) {
            //str2 is greater than str1
            return -1;
        }

        else{
            i++;
            j++;
        }
    }
    
    if(str1[i]=='\0' && str2[j]=='\0') {
        //length of str1 is equal to length of str2
        //therefore they must be equal
        return 0;
    }
    else if(str1[i]=='\0') {
        //length of str2 is greater than str1
        return -1;
    }
    else{
        return 1;
    }
}

int main() {
    //char str1[]="abc";
    //char str2[]= "abd";

    char str1[101];
    char str2[101];

    cin.getline(str1,101);
    cin.getline(str2,101);
    int out = stringCompare(str1,str2);

    if(out==0) {
        cout<<str1<<" is equal to "<<str2<<endl;
    }
    else if(out>0) {
        cout<<str1<<" is greater than "<<str2<<endl;
    }

    else if(out<0) {
        cout<<str1<<" is less than "<<str2<<endl;
    }
    return 0;
}
