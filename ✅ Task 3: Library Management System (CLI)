#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    void input() {
        cout << "Enter ID: "; cin >> id;
        cout << "Enter Title: "; cin >> title;
        cout << "Enter Author: "; cin >> author;
    }
    void display() {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book books[10];
    int count = 0, ch;
    do {
        cout << "\n1.Add Book\n2.Display All\n3.Exit\nChoose: ";
        cin >> ch;
        switch (ch) {
            case 1:
                books[count].input(); count++;
                break;
            case 2:
                for (int i = 0; i < count; i++)
                    books[i].display();
                break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid\n";
        }
    } while (ch != 3);
    return 0;
}
