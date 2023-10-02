#include <iostream>
using namespace std;
 
void swap(char* a, char* b){
    if (*a == *b){
        return;
    }

    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}


void rev(string& str, int left, int right)
{
    while (left < right){
        swap(&str[left++], &str[right--]);
    }
}
 
int binarysearch(string& str, int left, int right, int key)
{
    int index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (str[mid] <= key){
            right = mid - 1;
        }

        else {
            left = mid + 1;
            if (index == -1 || str[index] >= str[mid]){
                index = mid;
            }
        }
    }
    return index;
}
 
bool nextpermutation(string& str)
{
    int len = str.length(), i = len - 2;
    while (i >= 0 && str[i] >= str[i + 1]){
        --i;
    }

    if (i < 0){
        return false;
    }

    else {
        int index = binarysearch(str, i + 1, len - 1, str[i]);
        swap(&str[i], &str[index]);
        rev(str, i + 1, len - 1);
        return true;
    }
}
 
int main()
{
    int t;
	cin>>t;

	while(t>0) {
		int n;
		cin>>n;
		
		string str;
		cin>>str;
		
		bool val = nextpermutation(str);
		if (val == false){
			cout << "No Permutation Possible" << endl;
		}
		
		else{
			cout << str << endl;
		}

		t--;
	}

    return 0;
}