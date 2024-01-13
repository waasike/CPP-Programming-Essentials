#include <iostream>
using namespace std;

class Animal {
protected:
    string species;

public:
    Animal(const string& sp) : species(sp) {}

    void eat() {
        cout << "The animal is eating." << endl;
    }

    void sleep() {
        cout << "The animal is sleeping." << endl;
    }
};

class Pet {
protected:
    string name;

public:
    Pet(const string& n) : name(n) {}

    void play() {
        cout << "The pet is playing." << endl;
    }
};

