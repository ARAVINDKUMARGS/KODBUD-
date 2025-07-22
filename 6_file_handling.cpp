#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("student.txt");
    fout << "Name: John\nRoll: 101\nMarks: 95";
    fout.close();

    string line;
    ifstream fin("student.txt");
    while (getline(fin, line))
        cout << line << endl;
    fin.close();
    return 0;
}