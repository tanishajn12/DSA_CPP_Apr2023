#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter the number : ";
	cin >> num;

	int i=1;

	while (i<=num) {
		int j=1;
		while (j<=num)
		{
			cout << "*" ;
			j=j+1;
		}
		cout << '\n';
		i=i+1;
	} 
	return 0;
}


