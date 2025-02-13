
#include "car.h"

void Car::getUserPassword(string newOwner) {
        string password;
        cout << "Enter your 4 digit password: ";
        cin >> password;
        if (password == "1234") {
            cout << "Correct password\n";
            owner = newOwner;
        } 
        else {
            cout << "Wrong password\n";
            getUserPassword(newOwner);
    }
} 

    Car::Car(string COLOR, float PRICEUSD, int SEATS, int MAXSPEEDMPH, string ID) {
        color=COLOR;
        priceUSD = PRICEUSD;
        seats=SEATS;
        maxSpeedMPH=MAXSPEEDMPH;
        owner="None";
        id=ID;

        cout << "Object created!\n";
    }
    
    void Car::setOwner(string newOwner) {
        owner = newOwner;
    }

    void Car::setPrice(float newPrice) {
        priceUSD = newPrice;
    }

    void Car::setSpeed(int newSpeed) {
        maxSpeedMPH = newSpeed;
    }

    void Car::setSeats(int newSeats) {
        seats = newSeats;
    }

    void Car::setColor(string newColor) {
        color = newColor;
    }

    int Car::getPrice() {
        return priceUSD;
    }

    string Car::getOwner() {
        return owner;
    }
    
    int Car::getSpeed() {
        return maxSpeedMPH;
    }

    int Car::getSeats() {
        return seats;
    }

    string Car::getColor() {
        string octothorp = "#";
        return octothorp + color
        ;
    }
     
    string Car::getID() {
        return id;
    }

    void Car::printInfo() {
        cout << "This car is owned by " << owner << " and is of the color " << color << ". It is $" << priceUSD << " and has " << seats << " seats. It is has the ID " << id << "." << endl;
    }