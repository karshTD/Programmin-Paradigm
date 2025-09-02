#include <iostream>
#include <string>

using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
    void setPerson(string n, int a){
        name = n;
        age = a;
    }
    void displayperson(){
        cout<< "name: "<< name << endl;
        cout << "age: " << age << endl;
    }

};

class Student : public Person{
    string course;
    int year;

    public:
    void setstudent(string n, int a, string c, int y){
        setPerson(n, a);
        course = c;
        year = y;
    }
    void displaystudent(){
        displayperson();
        cout << "course: " << course << endl;
        cout << "year: "<< year << endl;
    }
};

class Employee: public Person{
    string designation;
    double salary;
public:
    void setEmployee(string n, int a, string d, double s){
        setPerson(n , a);
        designation = d;
        salary = s;
    }
    void displayEmployee(){
        displayperson();
        cout << "designation: "<< designation << endl;
        cout << "salary: " << salary << endl;
    
    }


};

int main(){
    Student s;
    s.setstudent("Utkarsh", 20 , "CSE", 2);
    cout << "student details: " << endl;
    s.displaystudent();
  
    cout << endl;

    Employee e;
    e.setEmployee("Rajesh" , 28 , "HR" , 45000);
    cout << "employee details: " << endl;
    e.displayEmployee();

    return 0;

}