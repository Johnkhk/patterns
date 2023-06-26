#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    virtual void makeSound() = 0;
};

class Car : public Vehicle {
    void makeSound() override {
        cout<<"Car goes VROOOOM!\n";
    }
};

class Bike : public Vehicle {
    void makeSound() override {
        cout<<"Bike goes SHOOOOO!\n";
    }
};

class Plane : public Vehicle {
    void makeSound() override {
        cout<<"Plane goes WOOOOOT!\n";
    }
};

// class vehcileFactory {

// }

class client {
public:
    Vehicle* createVehicle(string a) {
        Vehicle* vehicle; 
        if (a=="car") {
            vehicle = new Car();
            return vehicle;
        } else if (a=="bike") {

        } else if (a=="plane") {

        }
    }
};


int main() {
    return 0;
}