#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number : ";
	cin >> n;

    int digit=0;
    int lsf=INT16_MIN;

    while (n!=0) {
        digit = n%10;
        if (digit>lsf) {
            lsf=digit;
        }
        n=n/10;
    }
    cout<<"Largest  Digit : "<<lsf;
    return 0;
}
