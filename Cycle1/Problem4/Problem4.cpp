#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

class Triangle{
    private:
        int side1;
        int side2;
        int side3;
    public:
        void input();
        bool validate();
        void displaySide();
        void area();
        
};

void Triangle::input(){
    cout<<"Enter the 3 sides of triangle :";
    cin>>side1>>side2>>side3;
}

bool Triangle::validate(){
    if(side1<=1||side2<=1||side3<=1){
        return false;
    }
    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1 ){
        return true;
    }
    return false;
}

void Triangle::area(){
    double p = (double) (side1+side2+side3)/2;
    double result = p*(p-side1)*(p-side2)*(p-side3);
    double Area = sqrt(result);

    cout<<"Area of triangle is : "<<Area<<endl;
}
void Triangle:: displaySide(){
    if(validate()){
        cout<<"Valid Triangle"<<endl;
         cout<<"Sides of triangle are "<<side1<<","<<side2<<","<<side3<<endl;

         area();
    }else{
        cout<<"Not valid";
    }
}

int main(){
    Triangle t1;
    t1.input();
    t1.displaySide();
}