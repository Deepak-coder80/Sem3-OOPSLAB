/*
Problem Statement : Write class to do all 4 arthematic functions. Depending on the user's choice,
one of the operation is performed
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Arthematic{
    private:
    	int a,b;
        float result;
    public:
        
        void input(){
            cout<<"Enter two number : ";
            cin>>a>>b;
        }
        void addition(){
            result=a+b;
        }
        void substraction(){
            result=a-b;
           
        }
        void multiplication(){
            result = a*b;
            
        }
        void division(){
            result = (float)a/b;
            
        }

        void display(){
            cout<<"Result = "<<result<<endl;
        }
};

int main(){
    //object for Arthematic class
    Arthematic obj;

    int choice;

    //read the number
    obj.input();
    //read choice
    cout<<"select the Operator:"<<endl;
    cout<<"\tEnter 1 for Addition\n\tEnter 2 for substraction"<<endl;
    cout<<"\tEnter 3 for multiplication\n\tEnter 4 for division"<<endl;
    cout<<"Enter Here:";
    cin>>choice;

    switch (choice)
    {
    case 1:
        obj.addition();
        obj.display();
        break;
    case 2:
        obj.substraction();
        obj.display();
        break;
    case 3:
        obj.multiplication();
        obj.display();
        break;
    case 4:
        obj.division();
        obj.display();
        break;
    
    default:
        cout<<"Invalid Entry"<<endl;
        break;
    }
}
