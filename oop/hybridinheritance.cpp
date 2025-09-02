#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int prn;
public:
    void setStudent(string n, int p) {
        name = n;
        prn = p;
    }
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "PRN: " << prn << endl;
    }
};

class UT_Marks : virtual public Student {
protected:
    int ut1, ut2;
public:
    void setUT(int m1, int m2) {
        ut1 = m1;
        ut2 = m2;
    }
    void displayUT() {
        cout << "UT1 Marks: " << ut1 << endl;
        cout << "UT2 Marks: " << ut2 << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sportsMarks;
public:
    void setSports(int sm) {
        sportsMarks = sm;
    }
    void displaySports() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Result : public UT_Marks, public Sports {
    int total;
public:
    void calculate() {
        total = ut1 + ut2 + sportsMarks;
    }
    void displayResult() {
        displayStudent();
        displayUT();
        displaySports();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;
    r.setStudent("Utkarsh" , 224);
    r.setUT(40, 45);
    r.setSports(20);
    r.calculate();
    cout << "Result Details:" << endl;
    r.displayResult();
    return 0;
}
