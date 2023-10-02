#include <iostream>
using namespace std;

class compute {
public:
    double power(int a, double n) {
        if (n == 0) {
            return 1;
        } 
    
        else if (n >= 1) {
            double temp = power(a, n / 2);
            return temp * temp;
        } 
        
        else {
            return 1 / power(a, -n);
        }
    }
};

int main() {
    compute c;
    int a = 2;
    double n = 2.71;

    cout << c.power(a, n) << endl;
    return 0;
}
