#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int num=2;
    while (num<n) {
        int div=2;
        while (div<num) {
            if (num%div==0) {
                num++;
            }
            else {
                div++;
            }
        }
        cout<<num<<' ';
        num=num+1;
    }
}


