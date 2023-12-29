#include <iostream>

// Function to calculate the GCD and Bezout coeffecients
int extendedGCD(int a, int b, int& x, int& y) {
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    
    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

int main() {
    int a, b;
    std::cout << "Enter two integers (a and b): ";
    std::cin >> a >> b;

    int x, y;
    int gcd = extendedGCD(a, b, x, y);

    std::cout << "Bézout coefficients (x and y) for " << a << " and " << b 
              << " are: " << x << " and " << y << std::endl;
    std::cout << "Greatest Common Divisor (GCD) of " << a << " and " << b 
              << " is: " << gcd << std::endl;

    return 0;
}
