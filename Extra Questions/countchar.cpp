#include<iostream>
using namespace std;

int main() {

	int count = 0; // to track the no. of characters
	char ch;

	while(true) {
		ch = cin.get();
		if(ch == '$') {
			break;
		}
		count++;
	}
	cout << "count : " << count << endl;
	return 0;
}


