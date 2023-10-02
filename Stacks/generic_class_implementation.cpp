#include<iostream>
using namespace std;

template <typename T>
class stack {

    T* arr; //pointer to the array that internally represents stack
    int t;  //to store the array index of the stack top
    int n;  //to store the maximum stack capacity

    public :
        stack(int n) {
            arr=new T[n];
            t=-1;
            this->n=n;
        }

        void push(T data) {//constant time operation
            if(t==n-1){ //overflow condition
                //stack is full
                return;
            }
            t=t+1;
            arr[t]=data;
        }

        void pop() {//constant time operation
            if(t==-1) {//underflow condition
                //stack is empty
                return;

            }
            t=t-1;

        }

        T top(){//constant time operation
            return arr[t];
        }

        bool empty(){
            return t==-1;
        }

        int size(){
            return t+1;
        }

};

int main() {
    stack<string> s(5);

    cout<< "size:" << s.size() <<endl;
    cout<< "isEmpty ? "<<s.empty() <<endl;

    s.push("Tanisha");
    s.push("Dhruv");
    s.push("Sneha");
    s.push("Sowmya");
    s.push("yachna");

    cout<< "size : "<<s.size() <<endl;
    cout<<"top : "<<s.top() <<endl;
    cout<<"isEmpty ? "<<s.empty() <<endl;

    cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 
	cout << "isEmpty ? " << s.empty() << endl;

	s.pop();
	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();
	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();
	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

    s.pop();
	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();
	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}






