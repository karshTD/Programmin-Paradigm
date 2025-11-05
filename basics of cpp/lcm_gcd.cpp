#include <iostream>
using namespace std;

int calculateGCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2);
    
    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;
    
    return 0;
}
