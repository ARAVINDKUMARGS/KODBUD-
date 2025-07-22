#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int age;

    // Writing to file
    ofstream fout("student.txt");
    cout << "Enter name: "; cin >> name;
    cout << "Enter age: "; cin >> age;
    fout << name << " " << age;
    fout.close();

    // Reading from file
    ifstream fin("student.txt");
    fin >> name >> age;
    cout << "\nReading from file:\n";
    cout << "Name: " << name << ", Age: " << age << endl;
    fin.close();

    return 0;
}
