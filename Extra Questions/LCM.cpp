#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    int num; 

    //use ternary operator to get the large number
    num=(a>b) ? a: b;

    bool flag= true;

    while (flag) {
        if (num%a==0 && num%b==0) {
            cout<<num<<endl;
            break;
        }
        ++num;

    }
    return 0;
}
