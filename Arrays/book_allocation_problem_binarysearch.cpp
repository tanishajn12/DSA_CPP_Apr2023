#include<bits/stdc++.h>
using namespace std;

//function to check if it is possible to allocate books in such that the maxinum
//number of pages assigned to any student is numPages

bool isPossibleWay(int pages[100], int n, int m, int numPages) {
    int count=1;  //count of students
    int currSum=0;

    for(int i=0; i<n; i++) {
        if(pages[i]>numPages) {
            return false;
        }

        if(currSum+pages[i]>numPages) {
            count+=1; //increment the count of students

            //assign the current book to next student and update currSum
            currSum=pages[i];

            //if count becomes greater than m return false
            if(count>m) {
                return false;
            }
        }

        else{
            //assign this book to current student and update currSum
            currSum+=pages[i];
        }
    }
    return true;
}

int allocateBooks(int pages[100], int n, int m) {
    //if number of student is more than number of books
    if(n<m) {
        return -1;
    }

    int sum;
    for(int i=0; i<n; i++) {
        sum+=pages[i];
    }

    //every student to be alloted book hence numpages range from [1,sum of all]
    for (int numPages = 1; numPages <= sum; numPages++) {
        if (isPossibleWay(pages, n, m, numPages)) {
            return numPages;
        }
    }
    return -1;

}

int main() {
    int t;  //number of test cases
    cin>>t;

    while (t--) {
        int n,m;
        cin>>n>>m;  //n:number of books ; m:number of students
        
        int pages[100];
        for(int i=0; i<n; i++){
            cin>>pages[i];  //input no of pages for each book
        }

        //allotment should be in contiguous order only
        cout<<allocateBooks(pages,n,m)<<endl;
    }
    return 0;
}

