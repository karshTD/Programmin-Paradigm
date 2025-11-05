#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Patient {
    int patientID;
    string name;
    int age;
    string disease;
    Date admissionDate;
    Date dischargeDate;
};

void displayPatient(Patient p) {
    cout << "\nPatient Details:\n";
    cout << "ID: " << p.patientID << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Disease: " << p.disease << endl;
    cout << "Admission Date: " << p.admissionDate.day << "/" 
         << p.admissionDate.month << "/" << p.admissionDate.year << endl;
    cout << "Discharge Date: " << p.dischargeDate.day << "/" 
         << p.dischargeDate.month << "/" << p.dischargeDate.year << endl;
}

int main() {
    Patient patient;
    
    cout << "Enter Patient Details:\n";
    cout << "Patient ID: ";
    cin >> patient.patientID;
    cout << "Name: ";
    cin.ignore();
    getline(cin, patient.name);
    cout << "Age: ";
    cin >> patient.age;
    cout << "Disease: ";
    cin.ignore();
    getline(cin, patient.disease);
    
    cout << "\nAdmission Date:\n";
    cout << "Day: "; cin >> patient.admissionDate.day;
    cout << "Month: "; cin >> patient.admissionDate.month;
    cout << "Year: "; cin >> patient.admissionDate.year;
    
    cout << "\nDischarge Date:\n";
    cout << "Day: "; cin >> patient.dischargeDate.day;
    cout << "Month: "; cin >> patient.dischargeDate.month;
    cout << "Year: "; cin >> patient.dischargeDate.year;
    
    displayPatient(patient);
    
    return 0;
}
