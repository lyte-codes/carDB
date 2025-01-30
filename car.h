#include <iostream>
using namespace std;

class Car {
    public:

    string color; 
    float priceUSD;
    int seats;
    int maxSpeedMPH;
    string id;

    Car(string COLOR, float PRICEUSD, int SEATS, int MAXSPEEDMPH, string ID);
    void getUserPassword(string newOwner);

    void setOwner(string newOwner);
    string getOwner();

    void setSpeed(int newSpeed);
    int getSpeed();

    void setPrice(float newPrice);
    int getPrice();

    void setSeats(int seats);
    int getSeats();
    
    void setColor(string newColor);
    string getColor();

    string getID();

    private:

    string owner;

};
