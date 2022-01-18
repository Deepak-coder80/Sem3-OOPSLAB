/*
PROBLEM STATEMENT:Polar coordinates are represented in angle and radius format while rectangular
coordinates represented as (x,y). Define classes for both types and include member
functions to convert from polar to rectangular coordinates.(conversion from class to class.)
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class Polar{
    private:
        double radius;
        int angle;
    public:
        Polar();
        Polar(double radius,int angle){
            this->radius=radius;
            this->angle=angle;
        }
        double getRadius(){
            return radius;
        }
        int getAngle(){
            return angle;
        }
};

class Rectangluar{
    private:
        double x;
        double  y;
    public :
        void operator =(Polar);
        void display();

};

void Rectangluar::operator= (Polar p){
    double angleInRadian = p.getAngle()*(3.14/180);
    x =p.getRadius() * cos(angleInRadian);
    y =p.getRadius() * sin(angleInRadian);
}

void Rectangluar::display(){
    cout<<"Rectangluar Cooridnates are : "<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
    
    double r;
    int angle;

    cout<<"Enter radius : ";
    cin>>r;
    cout<<"enter angle in degree:";
    cin>>angle;

    Polar p1(r,angle);

    Rectangluar r1;
    r1=p1;
    r1.display();
    return 0;
}