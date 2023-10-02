#include<iostream>
using namespace std;

int main() {

    int a;
    cout<<"Enter the value of a : ";
    cin>>a;

    int b;
    cout<<"Enter the value of b : " ;
    cin>>b;

    int i=1;

    while(i<=3) {
        cout<<a+(i*b)<<' ';
        i++;
    }
    return 0;

}


