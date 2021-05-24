#include<iostream>
using namespace std;
class shape
{
protected:
    int numberOfSides;
   virtual int getnumberOfSides()=0;

};
class Trapezoid:public shape{
    public:
    Trapezoid(int s)
    {
      numberOfSides=s;
    }
   int getnumberOfSides()
   {
      return numberOfSides;
   }
};
class Triangle:public shape{
     public:
     Triangle(int s)
     {
        numberOfSides=s;
     }
     int getnumberOfSides()
     {
        return numberOfSides;
     }
};
class Hexagon:public shape
{
    public:
    Hexagon(int s)
    {
          numberOfSides=s;
    }
    int getnumberOfSides()
    {
         return numberOfSides;
    }
};
int main()
{
    Trapezoid te(4);
    Triangle t1e(3);
    Hexagon he(6);
    cout<<"Trapezoid: numberOfSides: "<<te.getnumberOfSides()<<endl;
    cout<<"Triangle: numberOfSides :"<<t1e.getnumberOfSides()<<endl;
    cout<<"Hexagon : numberOfSides: "<<he.getnumberOfSides()<<endl;
    return 0;
}
