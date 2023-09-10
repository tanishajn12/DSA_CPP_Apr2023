#include<iostream>
using namespace std;

int main() {
    long n;
    cin>>n;

	long long arr[n]; //time complexity : O(n)

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

	long long answer[n]; 

	long l[100];
	l[0] = 1;
	for(int i=1; i<=n-1; i++) {
		l[i] = l[i-1]*arr[i-1];
	}

	long r[100];
	r[n-1] = 1;
	for(int i=n-2; i>=0; i--) {
		r[i] = r[i+1]*arr[i+1];
	}

	for(int i=0; i<=n-1; i++) {
		answer[i] = l[i]*r[i];
	}

	for(int i=0; i<n; i++) {
		cout << answer[i] << " ";
	}

	cout << endl;
	return 0;
}






