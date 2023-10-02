#include<iostream>
using namespace std;

int main() {
    int a;
    cin>>a;

    int b;
    cin>>b;

    int num=min(a,b);  //find min of a and b
    
    while (num>0) {
        if (a%num==0 && b%num==0) {
            break;
        }
        num--;
    }
    cout<<num<<endl;
    return 0;
}

