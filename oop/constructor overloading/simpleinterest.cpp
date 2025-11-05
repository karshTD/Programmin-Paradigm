#include <iostream>
#include <cmath>
using namespace std;

class Interest {
public:
    // Simple Interest
    Interest(double p, double r, double t) {
        double si = (p * r * t) / 100;
        cout << "Simple Interest: " << si << endl;
        cout << "Total: " << p + si << endl;
    }
    
    // Compound Interest
    Interest(double p, double r, double t, char) {
        double ci = p * pow((1 + r/100), t) - p;
        cout << "Compound Interest: " << ci << endl;
        cout << "Total: " << p + ci << endl;
    }
};

int main() {
    Interest simple(1000, 5, 2);
    Interest compound(1000, 5, 2, 'C');
    return 0;
}
