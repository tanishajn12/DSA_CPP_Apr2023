#include<iostream>
using namespace std;
//constraints :  1<n<10

void replacePi(char* inp, int i) {
	// base case
	if(inp[i] == '\0') {
		return;
	}

	// recursive case
	// replace all the "pi's" with "3.14" in inp[i...]
	if(inp[i] == 'p' and inp[i+1] == 'i') {

		//replace (i,i+1)th characters with 3.14
		// 1. shift all the characters starting from the (i+2)th index two-steps to the right
		int j = i+2;
		while(inp[j] != '\0') {
			j++;  //iterating to know the index of null character
		}

		while(j >= i+2) {
			// shift the char. at the jth index two-steps to the right
			inp[j+2] = inp[j];
			j--;
		}

		// 2. replace "pi" at the (i, i+1,i+2,i+3)th index with "3.14"
		inp[i] = '3';
		inp[i+1] = '.';
		inp[i+2] = '1';
		inp[i+3] = '4';

		// 3. ask your friend ->replace all the "pi's" with "3.14" in inp[i+4...]
		replacePi(inp, i+4);

	} else {
		//ask your friend -> replace all the "pi's" with "3.14" in inp[i+1...]
		replacePi(inp, i+1);

	}

}

int main() {
    char inp[20]="pip";

	replacePi(inp, 0);

	cout << inp << endl;

	return 0;
}

  

  