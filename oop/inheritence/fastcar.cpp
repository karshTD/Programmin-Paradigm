#include <iostream>
using namespace std;

class Product {
public:
    int price;
    string brand;
};

class Electronics : public Product {
public:
    int warranty;
    int power;

    void displayElectronic() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Power: " << power << " watts" << endl;
    }
};

class Clothing : public Product {
public:
    string material;
    int rating;

    void displayClothes() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Material: " << material << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Electronics e;
    e.brand = "Sony";
    e.price = 50000;
    e.warranty = 2;
    e.power = 150;
    e.displayElectronic();

    Clothing c;
    c.brand = "Nike";
    c.price = 3000;
    c.material = "Cotton";
    c.rating = 9;
    c.displayClothes();

    return 0;
}
