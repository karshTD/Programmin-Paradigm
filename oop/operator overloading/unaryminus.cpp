#include <iostream>
using namespace std;

class MyArray {
private:
    static const int SIZE = 5;
    int arr[SIZE];

public:
    MyArray() {
        for (int i = 0; i < SIZE; i++) {
            arr[i] = 0;
        }
    }
    
    void initialize() {
        for (int i = 0; i < SIZE; i++) {
            arr[i] = (i + 1) * 10;
        }
    }
    
    // Overload unary minus operator
    MyArray operator-() const {
        MyArray result;
        for (int i = 0; i < SIZE; i++) {
            result.arr[i] = -arr[i];
        }
        return result;
    }
    
    void setElement(int index, int value) {
        if (index >= 0 && index < SIZE) {
            arr[index] = value;
        }
    }
    
    void display() const {
        cout << "[ ";
        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    MyArray arr1;
    arr1.initialize();
    
    cout << "Original array: ";
    arr1.display();
    
    MyArray negatedArr = -arr1;
    cout << "Negated array: ";
    negatedArr.display();
    
    // Modify some elements and test again
    arr1.setElement(0, -15);
    arr1.setElement(2, 25);
    cout << "\nModified array: ";
    arr1.display();
    
    MyArray negatedArr2 = -arr1;
    cout << "Negated modified array: ";
    negatedArr2.display();
    
    return 0;
}
