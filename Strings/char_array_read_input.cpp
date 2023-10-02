#include<iostream>
using namespace std;

int main() {
    char str[101];

    cout<<"Enter a string : ";

    //1. using cin>> : it automatically adds '\0' upon reading the input string
    cin>>str;

    cout<< "You've entered : "<<str <<endl; 
}

