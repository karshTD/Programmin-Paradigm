#include <iostream>
using namespace std;

class Temperature {
public:
    // From Celsius
    Temperature(double c) {
        cout << "C: " << c << " F: " << (c * 9/5) + 32 << " K: " << c + 273 << endl;
    }
    
    // From Fahrenheit
    Temperature(double f, char) {
        double c = (f - 32) * 5/9;
        cout << "F: " << f << " C: " << c << " K: " << c + 273 << endl;
    }
    
    // From Kelvin
    Temperature(double k, int) {
        double c = k - 273;
        cout << "K: " << k << " C: " << c << " F: " << (c * 9/5) + 32 << endl;
    }
};

int main() {
    Temperature t1(25.0);        // Celsius
    Temperature t2(77.0, 'F');   // Fahrenheit
    Temperature t3(300.0, 0);    // Kelvin
    return 0;
}
