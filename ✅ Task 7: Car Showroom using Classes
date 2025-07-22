#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;
    void input() {
        cout << "Enter Brand: "; cin >> brand;
        cout << "Enter Price: "; cin >> price;
    }
    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car c[5];
    int choice, count = 0;
    do {
        cout << "\n1. Add Car\n2. View Cars\n3. Exit\nChoose: ";
        cin >> choice;
        switch(choice) {
            case 1:
                c[count].input();
                count++;
                break;
            case 2:
                for(int i = 0; i < count; i++)
                    c[i].display();
                break;
            case 3:
                cout << "Goodbye!\n";
                break;
        }
    } while(choice != 3);
    return 0;
}
