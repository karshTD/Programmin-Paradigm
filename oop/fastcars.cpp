#include <iostream>
#include <string.h>
using namespace std;

class Car {
public:
    int topSpeed;
    int popularityRating;
};

class Mercedes : public Car {
public:
    string carname;
    int model;
};

class Audi : public Car {
    public:
    string carname;
    int model;
};


int main(){

    Mercedes m;
    m.carname = "Mercedes G-class";
    m.model = 2024;
    m.topSpeed = 280;
    m.popularityRating = 9;

    Audi a;
    a.carname = "Reight";
    a.model = 2022;
    a.topSpeed = 265;
    a.popularityRating = 8;

    cout<< m.carname << "\n" << m.topSpeed << "\n" << m.popularityRating << endl;
     cout<< a.carname << "\n" << a.topSpeed << "\n" << a.popularityRating << endl;


return 0;

}