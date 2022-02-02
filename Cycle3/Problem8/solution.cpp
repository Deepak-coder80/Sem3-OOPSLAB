#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//-----CLASSES-----
class Shape{
    protected:
        double side;
    public:
        virtual void area()=0; // pure virtual function
        virtual void perimeter()=0; //pure virtual function
};

class Triangle:public Shape{
    private:
        double side1;
        double side2;
    public:
        void get_sides();
        bool validate();
        void area();
        void perimeter();
};

class Rectangle:public Shape{
    private:
        double side1;
        
    public:
        void get_sides();
        void area();
        void perimeter();
};

class Circle:public Shape{
    public:
        void get_radius();
        void area();
        void perimeter();
};

class Square:public Shape{public:
        void get_side();
        void area();
        void perimeter();};

//-----MEMBER FUNCTION DEFINITIONS-----
//TRIANGLE CLASS
void Triangle::get_sides(){
    cout<<"Enter 3 sides of Triangle : ";
    cin>>side>>side1>>side2;
}
bool Triangle::validate(){
    if(side<1||side1<1||side2<1){
        return false;
    }
    if((side1+side2)>side && (side1+side)>side2 && (side2+side)>side1 ){
        return true;
    }
    return false;
}
void Triangle::area(){
    //check it is a valid triangle
    if(validate()){
        double s= (side+side1+side2)/2;
        double area = sqrt(s * (s-side) * (s-side1) * (s-side2));
        cout<<"\nArea of Triangle with sides "<<side<<","<<side1<<","<<side2<<" is = ";
        cout<<area<<endl;
    }else{
        cout<<"Trangle is not valid => area = 0"<<endl;
    }
    
}
void Triangle::perimeter(){
    double perimeter = (side+side1+side2);
    cout<<"\nPerimeter of Triangle with sides "<<side<<","<<side1<<","<<side2<<" is = ";
    cout<<perimeter<<endl;
}

//RECTANGLE CLASS
void Rectangle::get_sides(){
    cout<<"Enter length and bredth of Rectangle : ";
    cin>>side>>side1;   
}
void Rectangle::area(){
    double area =side * side1;
    cout<<"Area of rectangle with length "<<side<<" and breadth "<<side1<<" is = ";
    cout<<area<<endl;
}
void Rectangle::perimeter(){
    double perimeter = 2*(side + side1);
    cout<<"Perimeter of rectangle with length "<<side<<" and breadth "<<side1<<" is = ";
    cout<<perimeter<<endl;
}

//CIRCLE CLASS
void Circle::get_radius(){
    cout<<"Enter Radius of Circle : ";
    cin>>side; 
}
void Circle::area(){
    double area = 3.14 * (pow(side,2));
    cout<<"Area of circle with radius "<<side<<"is = "<<area<<endl;
}
void Circle::perimeter(){
    double perimeter = 2 * 3.14 * side;
    cout<<"Perimeter of Circle with radius "<<side<<" is = "<<perimeter<<endl;
}

//SQUARE CLASS
void Square::get_side(){
    cout<<"Enter one side of squre : ";
    cin>>side;
}
void Square::area(){
    double area = pow(side,2);
    cout<<"Area of Square with side "<<side<<" is = "<<area<<endl;
}
void Square::perimeter(){
    double perimeter = 4 * side;
    cout<<"Perimeter of Square with side "<<side<<" is = "<<perimeter<<endl;
}

//-----MAIN FUNCTION-----
int main(){
    int choice,options;
    Shape* shape_class_pointer;
    Triangle t; //object of triangle class
    Rectangle r;
    Circle c;
    Square sq;
    
    cout<<"\t\t------AREA & PERIMETER --------"<<endl;
    do
    {
        cout<<"SELECT A OPTION TO CONITNUE"<<endl;
        cout<<"\t Enter 1 for area and perimeter of Triangle  "<<endl;
        cout<<"\t Enter 2 for area and perimeter of Rectangle  "<<endl;
        cout<<"\t Enter 3 for area and perimeter of Circle  "<<endl;
        cout<<"\t Enter 4 for area and perimeter of Square  "<<endl;
        cout<<"\n Enter your option here : ";
        cin>>options;

        switch (options)
        {
        case 1:
            //Triangle
           
            t.get_sides();

            shape_class_pointer=&t;
            shape_class_pointer->area(); //triangle class area
            shape_class_pointer->perimeter(); //triangle class perimeter

            break;
        case 2:
            /* Rectangle */
           
            r.get_sides();

            shape_class_pointer=&r;
            shape_class_pointer->area(); //rectangle class area
            shape_class_pointer->perimeter(); //rectangle class perimeter

            break;
        case 3:
            /* Circle */
            
            c.get_radius();

            shape_class_pointer=&c;
            shape_class_pointer->area(); //circle class area
            shape_class_pointer->perimeter(); //circle class perimeter
            break;
        case 4:
            /* Square */
            
            sq.get_side();

            shape_class_pointer=&sq;
            shape_class_pointer->area(); //square class area
            shape_class_pointer->perimeter(); //square class perimeter
            break;
        default:
            cout<<"INVALID OPTION"<<endl;
            break;
        }
        
        cout<<"\n Do You Want to continue ? if want Enter 1 here : ";
        cin>>choice;
    } while (choice==1);
    
    return 0;
}