#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	int m;
	cin>>m;
	int brr[m];
	for(int j=0;j<m;j++){
		cin>>brr[j];
    }
	
    int carry=0;
	int ans[1000];
	int maxx = max(n,m)-1;
	int len=maxx;
    int sum;


	for(int i=n-1,j=m-1;i>=0,j>=0;i--,j--)
	{
		if(i>=0 && j>=0)
		{
			sum = arr[i]+brr[j]+carry;
			carry = sum/10;
			ans[maxx] = sum%10;
			maxx--;
		}
		else if(j>=0)
		{
			sum = brr[j]+carry;
			carry = sum/10;
			ans[maxx] = sum%10;
			maxx--;
		}
		else
		{
			sum = brr[i]+carry;
			carry = sum/10;
			ans[maxx] = sum%10;
			maxx--;
		}
	}
	if(carry!=0) {
		cout<<carry<<", ";
    }

	for(int i=0;i<=len;i++) {
		cout<<ans[i]<<", ";
    } 

	cout<<"END";
	return 0;
}