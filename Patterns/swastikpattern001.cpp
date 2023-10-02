#include<iostream>
using namespace std;
int main(){
    
    int num;
    cin>>num;

    for (int row = 0; row < num; ++row)
    {
        for (int col = 0; col < num; ++col)
        {
            int x = col - (num) / 2;
            int y = row - (num) / 2;

            bool equation = (x == 0 || y == 0) ||
                         (x < 0 and row == num - 1) ||
                           (y < 0 and col == 0) ||
                           (x > 0 and row == 0) ||
                           (y > 0 and col == num - 1);

            
            if (equation) {
                cout<<"*"<<"\t";
            }

            else {
                cout<<"\t";
            }

        }
        cout<<endl;
    }
    return 0;
}


