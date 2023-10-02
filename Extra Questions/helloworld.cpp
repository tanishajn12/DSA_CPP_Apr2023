#include<iostream>
using namespace std;

int main()
{

	int a;
	cout << "Enter the first number : ";
	cin >> a;

	int b;
	cout << "Enter the second number : ";
	cin >> b;

	int c;
	cout << "Enter the third number : ";
	cin >> c;

	if(a > b and a > c) 
	{
		cout << "Largest number = " << a << endl;
	} 
	else {
		// 'a' is not the largest
		if(b > c) {
			cout << "Largest number = " << b << endl;
		} 
		else {
			cout << "Largest number = " << c << endl;
		}
	}
	return 0;
}