#include <iostream.h>
#include <conio.h>

// Base class
class Vehicle {
public:
  void start() {
    cout << "Vehicle started." << endl;
  }
  void stop() {
    cout << "Vehicle stopped." << endl;
  }
};

// Derived class with single inheritance
class Car : public Vehicle {
public:
  void accelerate() {
    cout << "Car is accelerating." << endl;
  }
  void brake() {
    cout << "Car is braking." << endl;
  }
};

// Derived class with hierarchical inheritance
class Bike : public Vehicle {
public:
  void balance() {
    cout << "Bike is balancing." << endl;
  }
};

class Scooter : public Vehicle {
public:
  void kickStart() {
    cout << "Scooter is kick-started." << endl;
  }
};

// Main function
void main() {
  // Single inheritance
  Car myCar;
  myCar.start();
  myCar.accelerate();
  myCar.brake();
  myCar.stop();
  
  // Hierarchical inheritance
  Bike myBike;
  myBike.start();
  myBike.balance();
  myBike.stop();
  
  Scooter myScooter;
  myScooter.kickStart();
  myScooter.start();
  myScooter.stop();
  
  getch();
}
