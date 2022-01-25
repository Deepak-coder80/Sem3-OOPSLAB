
/*******************************************************************************
Title    : Operator Overloading - Stream Operators
Author   : Deepak M S 
Date     : 
*******************************************************************************/

#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

class Complex{
    private:
        int real;
        int img;
    public:
        friend ostream& operator<<(ostream& out, Complex& c);
        friend istream & operator >> (istream &in,  Complex &c);
};
ostream& operator<<(ostream& out, Complex& c){
    out<<c.real <<"+"<<c.img <<"i"<<endl;

    return out;
}

istream& operator >>(istream &in,Complex &c){
    cout<<"Enter Real part:";
    in>>c.real;
    cout<<"Enter Imaginary Part:";
    in>>c.img;

    return in;
}

int main(){

    Complex c1;

    cin>>c1;
    cout<<"Complex Number is :";
    cout<<c1;
    return 0;
}