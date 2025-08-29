#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;

public:
    void getStudentInfo() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
    }
    void displayStudentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

class Exam : public Student {
protected:
    float marks1, marks2;
public:
    void getExamInfo() {
        getStudentInfo();
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }
    void displayExamInfo() {
        displayStudentInfo();
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};
class Result : public Exam {
    float total;
public:
    void displayResult() {
        total = marks1 + marks2;
        displayExamInfo();
        cout << "Total Marks: " << total << endl;
    }
};
int main() {
    Result studentResult;
    studentResult.getExamInfo();
    studentResult.displayResult();
    return 0;
}

