#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double degree;
    
    cout << "Enter temperature in Celsius: ";
    cin >> degree;
    
    double fahrenheit = celsiusToFahrenheit(degree);
    cout << degree << "°C = " << fahrenheit << "°F" << endl;
    
    return 0;
}
