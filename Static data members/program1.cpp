#include <iostream>
using namespace std;

class employee
{

    string name;
    string dep;
public:
     static int id;
    void getdetails()
    {
        cout << "\nEnter ID, name & dep";
        cin >> id >> name >> dep;

        cout << "Employee ID, name & dep: " << id << " " << name <<" "<< dep<< endl;
    }

};

int employee::id;

int main()
{
    employee e1, e2, e3;

    e1.getdetails();
    e2.getdetails();
    e3.getdetails();

    return 0;
}
