#include <iostream>
using namespace std;

class Number {
private:
    int value;
    bool isValid;

public:
    Number(int val = 0) : value(val), isValid(true) {}
    
    // Overload unary logical NOT operator
    bool operator!() const {
        return !isValid || value == 0;
    }
    
    void setValue(int val) {
        value = val;
        isValid = true;
    }
    
    void invalidate() {
        isValid = false;
    }
    
    void display() const {
        if (isValid) {
            cout << "Value: " << value;
        } else {
            cout << "Invalid number";
        }
    }
};

int main() {
    Number num1(10);
    Number num2(0);
    Number num3;
    num3.invalidate();
    
    cout << "Number 1: ";
    num1.display();
    cout << " -> !num1: " << (!num1 ? "true" : "false") << endl;
    
    cout << "Number 2: ";
    num2.display();
    cout << " -> !num2: " << (!num2 ? "true" : "false") << endl;
    
    cout << "Number 3: ";
    num3.display();
    cout << " -> !num3: " << (!num3 ? "true" : "false") << endl;
    
    return 0;
}
