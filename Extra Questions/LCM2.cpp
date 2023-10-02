#include <iostream>  
using namespace std;  
  
int main()  
{  
    // declare variables  
    int num1, num2, lcm, gcd, temp;  
    cout <<" Enter the first number: ";  
    cin >> num1;  
    cout <<" Enter the second number: ";  
    cin >> num2;  
  
    // assign num1 and num2 values to int a and b  
    int a = num1;  
    int b = num2;     
    // use while loop to define the condition  
    while (num2 != 0)  
    {  
        temp = num2;  
        num2 = num1 % num2;  
        num1 = temp;  
    }  
      
    // assign num1 to gcd variable  
    gcd = num1;  
    lcm = (a * b) / gcd;  
    cout << "\n LCM of " << a << " and " << b << " = " << lcm;  
    return 0;  
}  

