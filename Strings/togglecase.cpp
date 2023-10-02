#include<iostream>
#include<cstring>
using namespace std;

//algorithm -> time:O(n)   space: O(1)

void togglechar(char str[]) {
    for(int i=0; str[i]!='\0'; i++) {
        
        if(str[i]>='A' && str[i]<='Z') {
            str[i]=str[i] + 'a' -'A';
        }

        else if(str[i]>='a' && str[i]<='z') {
            str[i]=str[i] +'A' -'a';
        }
    }
}

int main() {

    char str[100];
    cin.getline(str,100);

    togglechar(str);

    cout<<str<<endl;
}

