/*
Problem Statement: write class for storing the Temperature celsius,including a member function
to convert to fahrenheit and display it.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Temperature{
    private:
        float celsius,fahrenheit;
    public:
        

        void input(){
            cout<<"Enter the temperature : ";
            cin>>celsius;
        }

        void toFahrenheit(){
            fahrenheit = (celsius * 9 / 5) + 32;
            cout<<"Temperature in fahrenheit = "<<fahrenheit<<" F"<<endl;
        }

        void display(){
            cout<<"Temperature in celsius = "<<celsius<<" C"<<endl;
            

        }
};

int main(){
    Temperature obj;

    obj.input();
    obj.display();
    obj.toFahrenheit();

}
