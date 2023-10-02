#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str = "abcde";
	int n = str.size();

	for(int l=1; l<=n; l++) {

		cout <<"Substrings of length : "<< l << "  ";
		
        // generate all the subStrings of length l
		for(int i=0; i<=n-l; i++) {
			string subString = str.substr(i, l);
			cout << subString <<' ';
		}
        cout<<endl;

	}
	return 0;
}