#include<iostream>
using namespace std;
// declare a class
class Wall{
private:
    double length;
    double height;
public:
    //create parameterized constructor
    Wall(double len, double hgt) {
        //initialize private variables
        length=len;
        height=hgt;
    }
    Wall(double len)
    {
      length=len;
      height=5;
    }

    void display(){
        cout<<"Values:\n"<<length <<"\t"<<height;

    }
    //copy constructor with a Wall object as parameter
    Wall(Wall &obj) {
        //initialize private variables
        length=obj.length;
        height=obj.height;

    }
    double calculateArea() {
        return length * height;
    }
    double getWall()
    {
        return length;
        return height;
    }
};
int main()
{
    //create object and initialize data members
    Wall wall1(10.5,8.6);
    wall1.display();
    Wall wall2(42.5,5.8);
    wall2.display();
    cout<<"\nArea of Wall 1:"<<wall1.getWall()<<endl;
    cout<<"Area of Wall 1: calculateArea :"<<wall1.calculateArea()<<endl;
    cout<<"Area of Wall 2:"<<wall2.getWall()<<endl;
    cout<<"Area of Wall 2: calculateArea :"<<wall2.calculateArea()<<endl;
    Wall wall3 = wall2;     //copy contents of wall2 to another object wall3
    cout<<"Area of Wall 3 :"<<wall3.calculateArea()<< endl;    //print area of wall3
    return 0;
}
