#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int k;
    cout<<"Enter value of k: ";
    cin>>k;

    cout<<(n>>k&1)<<endl;

	n>>k&1 ? cout << "true" << endl :
	         cout << "false" << endl;

	1<<k&n ? cout << "true" << endl :
	         cout << "false" << endl;

	k = 4;

	n>>k&1 ? cout << "true" << endl :
	         cout << "false" << endl;

	1<<k&n ? cout << "true" << endl :
	         cout << "false" << endl;


	return 0;
}


