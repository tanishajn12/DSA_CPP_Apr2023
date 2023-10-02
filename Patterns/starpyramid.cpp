#include<iostream>
using namespace std;

int main() {
    int num;
    cout <<"Enter number :";
    cin >> num;
    
    int i=1;

     while (i <= num)
      {
        //print n-i spaces
        int j=1;
        while (j<= num-i) 
        {
            cout << " ";
            j=j+1;
        }
        // print 2i-1 stars
        
        j=1;
        while (j<=2*i-1)
        {
            cout << "*";
            j=j+1;
        }
        cout << "\n";
        i=i+1;

     }

}


