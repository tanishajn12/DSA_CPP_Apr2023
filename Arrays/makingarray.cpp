#include<iostream>
using namespace std;

int main() {
    int A[] ={10,20,30,40,50} ;

    int m= sizeof(A)/sizeof(int);

    for (int i=0; i<m; i++) {
        cout<<A[i] <<" ";

    }
    cout<<endl;
    return 0;
}



