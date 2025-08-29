#include <iostream>
using namespace std;

class Item {
protected:
    string title;
    float price;

public:
    void getItemData() {
        cout << "Enter item title: ";
        cin >> title;
        cout << "Enter item price: ";
        cin >> price;
    }

    void displayItemData() {
        cout << "Item Title: " << title << endl;
        cout << "Item Price: $" << price << endl;
    }
};

class Sale {
protected:
    float sales[3];

public:
    void getSalesData() {
        for (int i = 0; i < 3; ++i) {
            cout << "Enter sales for month " << i + 1 << ": $";
            cin >> sales[i];
        }
    }

    void displaySalesData() {
        for (int i = 0; i < 3; ++i) {
            cout << "Sales for month " << i + 1 << ": $" << sales[i] << endl;
        }
    }
};

class HWItem : public Item, public Sale {
public:
    void getData() {
        getItemData();
        getSalesData();
    }

    void displayData() {
        displayItemData();
        displaySalesData();
    }
};

class SWItem : public Item, public Sale {
public:
    void getData() {
        getItemData();
        getSalesData();
    }

    void displayData() {
        displayItemData();
        displaySalesData();
    }
};

int main() {
    HWItem hw;
    SWItem sw;

    cout << "Enter Hardware Item Data:\n";
    hw.getData();
    cout << "\nDisplay Hardware Item Data:\n";
    hw.displayData();

    cout << "\nEnter Software Item Data:\n";
    sw.getData();
    cout << "\nDisplay Software Item Data:\n";
    sw.displayData();

    return 0;
}
