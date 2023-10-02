#include<iostream>
using namespace std;

int multiply(int a,int b) {
    int c= a*b;
    return (c);
}

int main() {
    int a;
    cout<<"Enter the first number :";
    cin>>a;

    int b;
    cout<<"Enter the second number :";
    cin>>b;

    cout<<multiply(a,b)<<endl;

}

