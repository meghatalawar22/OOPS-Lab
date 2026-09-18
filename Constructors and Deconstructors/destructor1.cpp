#include<iostream>
using namespace std;
class employee
{
  private :
    int id;
    string dep;
    int salary;
  public:

    employee(int x,string y,int z)
    {
        id=x;
        dep=y;
        salary=z;
        cout<<"\id "<<id<<endl;
        cout<<"\ndep "<<dep<<endl;
        cout<<"\nsalary "<<salary<<endl;
    }
    ~employee()
    {
        cout <<"destructor";
    }


};
int main()
{
   employee e(23,"ece",45);

}

