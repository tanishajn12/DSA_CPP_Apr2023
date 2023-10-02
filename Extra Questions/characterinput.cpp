#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character :" ;
    cin>> ch;

    if (ch>='A' and  ch<='Z') {     
        cout <<ch<< " - Uppercase Alphabet"<<endl;
    }
    else if (ch>='a' and ch<='z') {
        cout << ch<<" - Lowercase Alphabet"<< endl;
    }
    else if (ch>='0' and ch<='9') {
        cout <<ch<<" - Digit"<<endl;
    }
    else {
        cout <<ch<< " - Special symbol"<<endl;
    }
    return 0;
}


