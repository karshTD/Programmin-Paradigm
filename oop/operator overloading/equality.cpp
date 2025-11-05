#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;
    
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    bool operator==(Complex other) {
        return real == other.real && imag == other.imag;
    }
};

int main() {
    Complex a(5, 3), b(5, 3), c(2, 7);
    
    cout << "a == b: " << (a == b) << endl;  // 1 (true)
    cout << "a == c: " << (a == c) << endl;  // 0 (false)
    
    return 0;
}
