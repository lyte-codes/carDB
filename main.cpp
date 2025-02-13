#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
#include "car.h"

void editCar(Car* myCar);

int main() {
    // Make List
    vector<Car*> CarList;
    
    // Make Cars
    CarList.push_back(new Car("bd2025", 36712.97, 6, 123, "1XG"));
    CarList.push_back(new Car("FAFBFC", 34574.98, 6, 126, "ZX3"));
    CarList.push_back(new Car("010203", 33855.99, 6, 118, "AD5"));
    CarList.push_back(new Car("878787", 41235.00, 8, 180, "QW9"));
    CarList.push_back(new Car("123456", 123456.78, 8, 258, "RF1"));

    // Main Menu Loop
    int option = -1;
    while (not (option == 0)) {
        // Print Options
        cout << 
        "\nExit - 0"
        <<"\nPrint Cars - 1" 
        <<"\nPick Car - 2" << endl;

        cout << "Enter option: ";
        cin >> option;

        // Do corresponding action
        switch (option) {
            case 1:
            // e.g. List Cars
                for (int a=0;a<CarList.size(); a++){
                    CarList.at(a)->printInfo();
                 }
                break;
            case 2:
                string tmp;
                cout << "What car would you like to edit?\nEnter car here: ";
                cin >> tmp;

                for (int a=0; a<CarList.size(); a++)
                {
                    if (CarList.at(a)->getID() == tmp) {
                        editCar(CarList.at(a));
                        break;
                    }
                break;
                }
                
                break;
        }
     

    }

}
//
void editCar(Car* myCar) {
    int option=11;
    while (not (option == 0)) {
        cout << 
        "\nReturn to main menu - 0"
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