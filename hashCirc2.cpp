#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Shape {
private:
    string color;
public:
    Shape(string argC = "transparent") { color = argC; }
    virtual ~Shape(void) {}

    string getColor(void) { return color; }
    void setColor(string argC) { color = argC; }

    virtual double perimeter(void) = 0;
    virtual double area(void) = 0;
    virtual string shapeName(void) = 0;

    virtual void displayProps(void) {
        cout << "Color: " << color << endl;
    }
};

class RegPolygon : public Shape {
private:
    int n;
    double sideLength;
public:
    RegPolygon(string argC = "clear", int argN = 3, double argS = 0.0)
        : Shape(argC), n(argN), sideLength(argS) {}

    ~RegPolygon(void) {}

    int getN(void) { return n; }
    void setN(int argN) { n = argN; }

    double getSideLength(void) { return sideLength; }
    void setSideLength(double argS) { sideLength = argS; }

    double perimeter(void) { return n * sideLength; }

    double area(void) { return 0; } // placeholder

    string shapeName(void) { return "polygon"; }

    void displayProps(void) {
        Shape::displayProps();
        cout << "Sides: " << n << " Length: " << sideLength << endl;
    }
};

class Circle : public Shape {
private:
    double rad;
public:
    Circle(string argC = "clear", double argR = 0.0)
        : Shape(argC), rad(argR) {}

    ~Circle(void) {}

    void setRadius(double arg) { rad = arg; }
    double getRadius(void) { return rad; }

    double perimeter(void) { return 2 * 3.14159 * rad; }
    double area(void) { return 3.14159 * rad * rad; }

    void displayProps(void) {
        Shape::displayProps();
        cout << "Radius: " << rad << endl;
    }

    string shapeName(void) { return "Circle";  }
};

class Cylinder : public Circle {
private:
    double h;

public:
    Cylinder(string color = "clear", double r = 0.0, double height = 0.0)
        : Circle(color, r), h(height) {}

    void displayProps() {
        Circle::displayProps();
        cout << "Height: " << h << endl;
    }
};

// simplified hash (since Circle has no x/y)
string circleHash(Circle& arg) {
  if(arg.getX() <0 ){
    if(arg.getY() > 0) {
        return "QII";
    }else{
        return "QIII";
    }else{
        if(arg.getY() > 0){
            return "QIV"
        }
    }
  }
}

void printHashTable(map<string, vector<Circle*> > &arg){
    for(int i = 0; i < arg["QI"].size(); i++){
        cout << "QI bucket: ";
        arg["QI"][i]->print();
    }
    cout << endl;
    for(int i = 0; i < arg["Q2"].size(); i++){
        cout << "QI bucket: ";
        arg["QI"][i]->print();
    }
    cout << endl;
    for(int i = 0; i < arg["Q3"].size(); i++){
        cout << "QI bucket: ";
        arg["QI"][i]->print();
    }
    cout << endl;
    for(int i = 0; i < arg["Q4"].size(); i++){
        cout << "QI bucket: ";
        arg["QI"][i]->print();
    }
    cout << endl;
}
int main(void) {
    map<string, vector<Circle*> > myTable;

    Circle* tempPtr;
    string tempKey;
    int a, b;

    for (int i = 0; i < 20; i++){
    a = rand() % 21-10;
    b = rand() % 21-10;
} 
    tempPtr = new Circle(3, -2, 8);
    cout << circleHash(*tempPtr) << endl;
    myTable[tempKey].push_back(tempPtr);

   tempPtr = new Circle(3, 2, 1);
   cout << circleHash(*tempPtr) << endl;
   myTable[tempKey].push_back(tempPtr);
    
   tempPtr = new Circle(3, -2, 8);
   cout << circleHash(*tempPtr) << endl;
   myTable[tempKey].push_back(tempPtr);

   printHashTable(myTable);

   for(int i = 0; i < myTable["QI"].size(); i++){
        cout << "QI bucket: ";
        delete myTable["QI"][i]->print();
    }
    myTable["QI"].clear();
    
    for(int i = 0; i < myTable["QII"].size(); i++){
        cout << "QII bucket: ";
        delete myTable["QII"][i]->print();
    }
    myTable["QII"].clear();

     for(int i = 0; i < myTable["QIII"].size(); i++){
        cout << "QIII bucket: ";
        delete myTable["QIII"][i]->print();
    }
    myTable["QIII"].clear();

     for(int i = 0; i < myTable["QIV"].size(); i++){
        cout << "QIV bucket: ";
        delete myTable["QIV"][i]->print();
    }
    myTable["QIV"].clear();

    return 0;
}
