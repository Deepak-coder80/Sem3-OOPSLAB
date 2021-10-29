/*
Problem Statement : Write class to do all 4 arthematic functions. Depending on the user's choice,
one of the operation is performed
*/

#include <iostream>

using namespace std;

class Arthematic{
    public:
        void addition(int a, int b){
            cout<<"Addition Result = "<<(a+b)<<endl;
        }
        void substraction(int a, int b){
            cout<<"Addition Result = "<<(a-b)<<endl;
        }
        void multiplication(int a, int b){
            cout<<"Addition Result = "<<(a*b)<<endl;
        }
        void division(int a, int b){
            cout<<"Addition Result = "<<(a/b)<<endl;
        }
};

int main(){
    //object for Arthematic class
    Arthematic obj;

    int num1,num2,choice;

    //read the number
    cout<<"Enter two number : ";
    cin>>num1>>num2;

    //read choice
    cout<<"select the Operator:"<<endl;
    cout<<"\tEnter 1 for Addition\n\tEnter 2 for substraction"<<endl;
    cout<<"\tEnter 3 for multiplication\n\tEnter 5 for division"<<endl;
    cout<<"Enter Here:";
    cin>>choice;

    switch (choice)
    {
    case 1:
        obj.addition(num1,num2);
        break;
    case 2:
        obj.substraction(num1,num2);
        break;
    case 3:
        obj.multiplication(num1,num2);
        break;
    case 4:
        obj.division(num1,num2);
        break;
    
    default:
        cout<<"Invalid Entry"<<endl;
        break;
    }
}