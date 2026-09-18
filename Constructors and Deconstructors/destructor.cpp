#include<iostream>
using namespace std;
class car
{
  private :
    float mileage;
  public:
    car()
    {
        cout<<"\nenter mileage";
        cin>>mileage;
        cout<<"mileage"<<" "<<mileage<<endl;
    }
    ~car()
    {
    cout<<"destructor";
    }

};
int main()
{
    car c1,c2;
}
