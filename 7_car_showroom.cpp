#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;
    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.price = 1500000;
    c1.display();
    return 0;
}