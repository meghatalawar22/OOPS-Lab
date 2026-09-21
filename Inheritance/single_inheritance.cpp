//sIngle Inheritance program
#include <iostream>
using namespace std;
int legs=4;
class Animal{

public:
    void display1(){
    cout<<"\nLegs="<<legs;
    }
};
class Dog:private Animal{
bool tail= true;
public :
void display2()
{
     cout<<"\nLegs="<<legs;
}
};
int main()
{
    Animal a1;
    Dog d1;
    //d1.display1();
    d1.display2();
}


