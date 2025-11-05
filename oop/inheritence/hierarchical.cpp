#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    string color;
    
public:
    Shape(string c = "Black") : color(c) {}
    
    virtual void display() {
        cout << "Color: " << color << endl;
    }
    
    virtual float area() = 0;  // Pure virtual function
};

// Derived class 1
class Circle : public Shape {
private:
    float radius;
    
public:
    Circle(string c, float r) : Shape(c), radius(r) {}
    
    void display() {
        cout << "Circle - ";
        Shape::display();
        cout << "Radius: " << radius << endl;
    }
    
    float area() {
        return 3.14159 * radius * radius;
    }
};

// Derived class 2
class Rectangle : public Shape {
private:
    float length, width;
    
public:
    Rectangle(string c, float l, float w) : Shape(c), length(l), width(w) {}
    
    void display() {
        cout << "Rectangle - ";
        Shape::display();
        cout << "Length: " << length << ", Width: " << width << endl;
    }
    
    float area() {
        return length * width;
    }
};

// Derived class 3
class Triangle : public Shape {
private:
    float base, height;
    
public:
    Triangle(string c, float b, float h) : Shape(c), base(b), height(h) {}
    
    void display() {
        cout << "Triangle - ";
        Shape::display();
        cout << "Base: " << base << ", Height: " << height << endl;
    }
    
    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    Shape *shapes[3];
    
    shapes[0] = new Circle("Red", 5.0);
    shapes[1] = new Rectangle("Blue", 4.0, 6.0);
    shapes[2] = new Triangle("Green", 3.0, 4.0);
    
    cout << "Hierarchical Inheritance Example - Shapes:\n\n";
    
    for (int i = 0; i < 3; i++) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << "------------------------" << endl;
    }
    
    // Clean up memory
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }
    
    return 0;
}