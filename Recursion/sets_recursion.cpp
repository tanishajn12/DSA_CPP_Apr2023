/* 
    > insert/erase/find is logarithmic i.e 0(logn)
    > values are inserted in sorted order
    > set contains only distinct values
    > multiset allows duplicate values

*/

#include<iostream>
#include<set>  
using namespace std;

int main() {

    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1);

    cout<< "size : "<<s.size() <<endl;

    s.erase(5);

    cout<<"size : "<<s.size() <<endl;

    for(auto it=s.begin(), end=s.end(); it !=end; it++) {
        cout<<*it<<" "; //dereference the pointer
    }
    cout<<endl;

    for(auto x :s) {  //for each loop
        cout<< x<< " ";
    }
    cout<<endl;


}