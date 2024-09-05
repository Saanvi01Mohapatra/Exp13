/*Saanvi
23070123110
ENTC B2*/
#include <iostream>
using namespace std;

class Room {
private:
    double length;
    double breadth;

public:
    
    Room() {
        length = 9;
        breadth = 7;
    }

    
    Room(double l, double b) {
        length = l;
        breadth = b;
    }

    
    Room(double len) {
        length = len;
        breadth = 8.1;
    }

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    Room r1;
    Room r2(8.6, 6.9);
    Room r3(9, 9);
       
    cout << "Area of r1: " << r1.calculateArea() << endl;
    cout << "Area of r2: " << r2.calculateArea() << endl;
    cout << "Area of r3: " << r3.calculateArea() << endl;

    return 0;
}