#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

// Decimal to Binary
string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary.empty() ? "0" : binary;
}

// Binary to Decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Decimal to Octal
string decimalToOctal(int n) {
    string octal = "";
    while (n > 0) {
        octal = to_string(n % 8) + octal;
        n /= 8;
    }
    return octal.empty() ? "0" : octal;
}

// Octal to Decimal
int octalToDecimal(string octal) {
    int decimal = 0;
    int power = 0;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * pow(8, power);
        power++;
    }
    return decimal;
}

// Decimal to Hexadecimal
string decimalToHexadecimal(int n) {
    string hex = "";
    char hexChars[] = "0123456789ABCDEF";
    
    while (n > 0) {
        hex = hexChars[n % 16] + hex;
        n /= 16;
    }
    return hex.empty() ? "0" : hex;
}

// Hexadecimal to Decimal
int hexadecimalToDecimal(string hex) {
    int decimal = 0;
    int power = 0;
    
    for (int i = hex.length() - 1; i >= 0; i--) {
        char c = toupper(hex[i]);
        int value;
        if (c >= '0' && c <= '9') {
            value = c - '0';
        } else {
            value = c - 'A' + 10;
        }
        decimal += value * pow(16, power);
        power++;
    }
    return decimal;
}

int main() {
    int choice, num;
    string str;
    
    cout << "Base Conversion Menu:\n";
    cout << "1. Decimal to Binary\n";
    cout << "2. Binary to Decimal\n";
    cout << "3. Decimal to Octal\n";
    cout << "4. Octal to Decimal\n";
    cout << "5. Decimal to Hexadecimal\n";
    cout << "6. Hexadecimal to Decimal\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter decimal number: ";
            cin >> num;
            cout << "Binary: " << decimalToBinary(num) << endl;
            break;
        case 2:
            cout << "Enter binary number: ";
            cin >> str;
            cout << "Decimal: " << binaryToDecimal(str) << endl;
            break;
        case 3:
            cout << "Enter decimal number: ";
            cin >> num;
            cout << "Octal: " << decimalToOctal(num) << endl;
            break;
        case 4:
            cout << "Enter octal number: ";
            cin >> str;
            cout << "Decimal: " << octalToDecimal(str) << endl;
            break;
        case 5:
            cout << "Enter decimal number: ";
            cin >> num;
            cout << "Hexadecimal: " << decimalToHexadecimal(num) << endl;
            break;
        case 6:
            cout << "Enter hexadecimal number: ";
            cin >> str;
            cout << "Decimal: " << hexadecimalToDecimal(str) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
