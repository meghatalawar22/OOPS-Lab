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

};
int main()
{
    car c1,c2;
}
