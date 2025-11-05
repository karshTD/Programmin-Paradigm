#include <iostream>
#include <string>
using namespace std;

struct Product {
    int productNumber;
    string name;
    double price;
};

double calculateTotalAmount(Product products[], int quantities[], int n) {
    double total = 0.0;
    for(int i = 0; i < n; i++) {
        total += products[i].price * quantities[i];
    }
    return total;
}

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    
    Product products[n];
    int quantities[n];
    
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for product " << i+1 << ":\n";
        cout << "Product Number: ";
        cin >> products[i].productNumber;
        cout << "Product Name: ";
        cin.ignore();
        getline(cin, products[i].name);
        cout << "Price: ";
        cin >> products[i].price;
        cout << "Quantity: ";
        cin >> quantities[i];
    }
    
    double total = calculateTotalAmount(products, quantities, n);
    cout << "\nTotal amount required: $" << total << endl;
    
    return 0;
}
