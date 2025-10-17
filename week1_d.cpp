#include <iostream>
using namespace std;

// Function with default arguments
void greet(string name, string greeting = "Hello", int year = 2025) {
    cout << greeting << ", " << name << "! Welcome to year " << year << "." << endl;
}

class Person {
public:     // Accessible anywhere
    string name;

protected:  // Accessible in this class & derived classes
    int age;

private:    // Accessible only in this class
    string hobby;

public:
    // Public method to set details
    void setDetails(string n, int a, string h) {
        name = n;
        age = a;
        hobby = h;
    }

    // Public method to access private data
    void showHobby() {
        cout << "Hobby: " << hobby << endl;
    }
};

int main() {
    // Demonstrating default arguments
    greet("Madhu");                      // Uses default greeting & year
    greet("Akira", "Hi");                // Overrides greeting
    greet("Jyothiesh", "Good Morning", 2030);// Overrides both

    // Demonstrating access specifiers
    Person p1;
    p1.setDetails("Akira", 20, "Reading");
    cout << "Name: " << p1.name << endl; // Public access
    p1.showHobby();                      // Accessing private data via method

    return 0;
}

