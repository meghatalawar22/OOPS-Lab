#include <iostream>
using namespace std;

class Animal {
public:
    int legs = 4;

    void display1() {
        cout << "\nLegs=" << legs;
    }
};

class Dog : public Animal {
    bool tail = true;

public:
    void display2() {
        cout << "\nLegs=" << legs;
    }
};

int main() {
    Animal a1;
    Dog d1;

    d1.display1();
    d1.display2();

    return 0;
}


