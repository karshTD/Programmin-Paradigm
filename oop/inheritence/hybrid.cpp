#include <iostream>
using namespace std;

// Base class 1
class Person {
protected:
    string name;
    int age;
    
public:
    Person(string n = "", int a = 0) : name(n), age(a) {}
    
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Base class 2
class Employee {
protected:
    int empId;
    string department;
    
public:
    Employee(int id = 0, string dept = "") : empId(id), department(dept) {}
    
    void displayEmployee() {
        cout << "Employee ID: " << empId << endl;
        cout << "Department: " << department << endl;
    }
};

// Intermediate class (Single inheritance)
class Student : public Person {
protected:
    int studentId;
    string course;
    
public:
    Student(string n, int a, int sid, string c) : Person(n, a), studentId(sid), course(c) {}
    
    void displayStudent() {
        displayPerson();
        cout << "Student ID: " << studentId << endl;
        cout << "Course: " << course << endl;
    }
};

// Final class (Multiple inheritance)
class WorkingStudent : public Student, public Employee {
private:
    float hoursPerWeek;
    
public:
    WorkingStudent(string n, int a, int sid, string c, int eid, string dept, float hours)
        : Student(n, a, sid, c), Employee(eid, dept), hoursPerWeek(hours) {}
    
    void displayWorkingStudent() {
        cout << "Working Student Details:\n";
        cout << "=======================\n";
        displayStudent();
        displayEmployee();
        cout << "Hours per week: " << hoursPerWeek << endl;
    }
};

int main() {
    WorkingStudent ws("John Doe", 22, 1001, "Computer Science", 5001, "IT", 20);
    
    ws.displayWorkingStudent();
    
    return 0;
}