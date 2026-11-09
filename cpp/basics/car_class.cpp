#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    int modelnum;
    string brand;
    string model;
    int year;
    string time;
};

int main() {

    Car car1;

    car1.modelnum = 123445;
    car1.brand = "BMW";
    car1.model = "M4 Competition";
    car1.year = 2028;
    car1.time = "Morning";

    Car car2;

    car2.modelnum = 12333445;
    car2.brand = "BMW";
    car2.model = "M4 Competition";
    car2.year = 2029;
    car2.time = "Evening";

    cout << "Car 1: "
         << car1.modelnum << " "
         << car1.brand << " "
         << car1.model << " "
         << car1.year << " "
         << car1.time << endl;

    cout << "Car 2: "
         << car2.modelnum << " "
         << car2.brand << " "
         << car2.model << " "
         << car2.year << " "
         << car2.time << endl;

    return 0;
}