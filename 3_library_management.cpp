#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    string title;
    string author;
    Book(string t, string a) : title(t), author(a) {}
};

int main() {
    vector<Book> library;
    library.push_back(Book("C++ Basics", "Bjarne Stroustrup"));
    library.push_back(Book("Let Us C++", "Yashwant Kanetkar"));

    cout << "Library Books:\n";
    for (auto b : library)
        cout << b.title << " by " << b.author << endl;

    return 0;
}