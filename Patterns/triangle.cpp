#include <iostream>  
using namespace std; 

bool checkValidity(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a){
        return false;
    }

    else if (a == 0 || b == 0 || c == 0){
        return false;
    }

    else{
        return true;
    }
}
  
string typeTriangle(int a, int b, int c) {
    int x = a * a;  
    int y = b * b;  
    int z = c * c; 
    if (a == b && b == c){  
        return "Equilateral";
    }  

    else if (a == b || b == c || a == c){  
        return "Isosceles"; 
    }
    
    else if(x == y + z || y == x + z || z == x + y){
        return "right-angled";
    }

    else{
        return "Scalene";  
    }
}  


int main()  
{  
    int a, b, c;  
    cout<<"Enter the sides of triangle: ";  
    cin>>a>>b>>c; 

    if(checkValidity(a,b,c)) {
        cout<<typeTriangle(a,b,c);
        cout<<endl;
    }

    else{
        cout<<"Not a Valid Triangle.";
    }
    return 0;  
}  
