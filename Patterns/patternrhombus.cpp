#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1;

    while (i<=n) {
        //print n-i spaces
        int j=1;
        while (j<=n-i) {
            cout<<" "<<'\t';
            j++;
        }

        //print i numbers starting with i in increasing order
        int k=1;
        int num=i;
        while (k<=i) {
            cout<<num<<'\t';
            k++;
            num++;
        }
        // print i-1 numbers starting with 2i-2 in the decreasing order
		// num = 2*i-2;
		num=2*i-2;
		int l = 1;
		while(l <= i-1) {
			cout << num <<'\t';
			l++;
			num--;
		}
		i++;
		cout << endl;
        
    }
    for (int i=n-1; i>=1; i--) {
        //print n-i spaces
        for (int j=1; j<=n-i; j++) {
            cout <<' '<<'\t';
        }
        //print i numbers starting with i in increasing order
        int k=1;
        int num=i;
        while (k<=i) {
            cout<<num<<'\t';
            k++;
            num++;
        }
        // print i-1 numbers starting with 2i-2 in the decreasing order
		// num = 2*i-2;
        num=2*i-2;
		int l = 1;
		while(l <= i-1) {
			cout << num <<'\t';
			l++;
			num--;
        }
        cout <<endl;
    }
    return 0;
}

