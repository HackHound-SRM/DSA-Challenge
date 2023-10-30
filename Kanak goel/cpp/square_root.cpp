#include <iostream>
#include <cmath>
using namespace std;

double bsSquareRoot(double x, double precision) {
    double left = 0.0;
    double right = x;
    double mid = (left + right) / 2;
    
    while (abs(mid * mid - x) > precision) {
        if (mid * mid < x) {
            left = mid;
        } else {
            right = mid;
        }
        mid = (left + right) / 2;
    }
    
    return mid;
}

int main() {
    double x;
    double precision = 1e-9;
    
    cout << "Enter a number : ";
    cin >> x;
    double sqrtX = bsSquareRoot(abs(x),precision);

    (x < 0)? cout << "Square root of " << x << " is " << sqrtX << " i\n"  :
             cout << "Square root of " << x << " is " << sqrtX << endl;
    
    
    return 0;
}
