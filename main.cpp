#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
#include "car.h"

void editCar(Car* myCar);

int main() {
    /*
    // Make Car
    Car myCar("000000", 0, 0, 0);
    // Price
    myCar->setPrice(654321);
    cout << myCar->getPrice() << endl;
    myCar->setColor("00FFFF");
    cout << myCar->getColor() << endl;
    */
    vector<Car*> CarList;

    CarList.push_back(new Car("bd2025", 36712.97, 6, 120, "1XG"));
    CarList.push_back(new Car("FAFBFC", 34574.98, 6, 120, "ZX3"));
    CarList.push_back(new Car("bd2025", 36712.97, 6, 120, "1XG"));
    CarList.push_back(new Car("bd2025", 34574.98, 6, 120, "ZX3"));
    // Print Cars
    for (int a=0;a<CarList.size(); a++){
        cout << "This car is owned by " << CarList.at(a)->getOwner() << " and is of the color " << CarList.at(a)->getColor() << ". It is $" << CarList.at(a)->getPrice() << " and has " << CarList.at(a)->getSeats() << " seats." << endl;
    }

    string tmp = "You found an Easter Egg!";
    cout << "What car would you like to edit?/nEnter car here: ";
    cin >> tmp;

    //editCar(tmp);
}

void editCar(Car* myCar) {
    int option=11;
    while (not (option == 0)) {
        cout << 
        "\nExit - 0"
        <<"\nSet Owner - 1"
        <<"\nGet Owner - 2"
        <<"\nSet Top Speed - 3"
        <<"\nGet Top Speed - 4"
        <<"\nSet Price - 5"
        <<"\nGet Price - 6"
        <<"\nSet Seats - 7"
        <<"\nGet Seats - 8"
        <<"\nSet Color - 9"
        <<"\nGet Color - 10"
        <<"\n" << endl;
        cout << "Enter option: ";
        cin >> option;

        string inputStr = "";
        int inputInt = 0;
        system("clear");

        switch (option) {
            case 1:
                cout << "Enter new owner: ";
                cin >> inputStr;
                myCar->setOwner(inputStr);
                break;
            case 2:
                cout << myCar->getOwner() << endl;
                break;
            case 3:
                cout << "Enter new top speed: ";
                cin >> inputInt;
                myCar->setSpeed(inputInt);
                break;
            case 4:
                cout << myCar->getSpeed() << endl;
                break;
            case 5:
                cout << "Enter new price: ";
                cin >> inputInt;
                myCar->setPrice(inputInt);
                break;
            case 6:
                cout << myCar->getPrice() << endl;
                break;
            case 7:
                cout << "Enter new number of seats: ";
                cin >> inputInt;
                myCar->setSeats(inputInt);
                break;
            case 8:
                cout << myCar->getSeats() << endl;
                break;
            case 9:
                cout << "Enter new color: ";
                cin >> inputStr;
                myCar->setColor(inputStr);
                break;
            case 10:
                cout << myCar->getColor() << endl;
                break;
            
        }
        if (option % 2 == 0) {
            cout << "press anybutton to continue: ";
            cin >> inputStr;

        }

    }
}