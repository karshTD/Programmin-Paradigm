#include <iostream>
using namespace std;

// Base class 1
class Person {
protected:
    string name;
    int age;
    
public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Base class 2
class Employee {
protected:
    int empId;
    float salary;
    
public:
    void getEmployeeData() {
        cout << "Enter employee ID: ";
        cin >> empId;
        cout << "Enter salary: ";
        cin >> salary;
    }
    
    void displayEmployee() {
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Derived class with multiple inheritance
class Manager : public Person, public Employee {
private:
    string department;
    
public:
    void getManagerData() {
        getPersonData();
        getEmployeeData();
        cout << "Enter department: ";
        cin >> department;
    }
    
    void displayManager() {
        cout << "\nManager Details:\n";
        displayPerson();
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager mgr;
    
    cout << "Enter manager details:\n";
    mgr.getManagerData();
    mgr.displayManager();
    
    return 0;
}