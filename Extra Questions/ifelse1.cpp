#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter the sides of Triangle: ";
    cin>>a>>b>>c;

    if (a==b == c) {
        cout<<"EQUILATERAL TRIANGLE";

    }
    else if (a==b || b==c || c==a){
        cout<<"ISOSCELES TRIANGLE";

    }

    else {
        cout<<"SCALENE TRIANGLE";
    }
    return 0;
}



