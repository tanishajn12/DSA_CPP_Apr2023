#include<iostream>
using namespace std;

int f(int x, int y) {

    //base case
    
    if (y==0) {
        return 0;
        //compute the product of x and y
    }

    //recursive case
    //compute the product of x and y-1 i.e add x, y-1 times

    int A = f(x,y-1);

    return x+A;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout << f(a,b) << endl;

    return 0;
}

