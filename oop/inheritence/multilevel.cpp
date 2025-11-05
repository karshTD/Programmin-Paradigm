#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNo;
    
public:
    void getStudentData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Intermediate derived class
class Exam : public Student {
protected:
    float marks[5];
    
public:
    void getMarks() {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }
    }
    
    void displayMarks() {
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Final derived class
class Result : public Exam {
private:
    float total;
    float percentage;
    
public:
    void calculateResult() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        percentage = total / 5;
    }
    
    void displayResult() {
        displayStudent();
        displayMarks();
        cout << "Total Marks: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;
    
    cout << "Enter student details:\n";
    student.getStudentData();
    student.getMarks();
    student.calculateResult();
    
    cout << "\nStudent Result:\n";
    student.displayResult();
    
    return 0;
}