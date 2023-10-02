#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[]="hello";
    char str2[]="world";

    str1.append(str2);

    cout<<str1;
}