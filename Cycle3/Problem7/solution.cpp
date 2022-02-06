#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

//------CLASSES-----
class Student{
    protected:
        std::string name;
        int age;
        int regNo;
    public:
        virtual void sort();
};
class MTech:public Student{
    protected:
        double cgpa;
    public:
        void sort();
        void get_details();
        void display();
};
class BTech:public Student{ 
    protected:
        double mark;
    public:
        void sort();
        void get_details();
        void display();
};
//-----MEMEBER FUNCTION DEFINITIONS---
//MTech CLASS
void MTech::get_details(){
    cout<<"Enter Reg No : ";
    cin>>regNo;
    cout<<"Enter Name : ";
    getline(cin,name);
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter CGPA : ";
    cin>>cgpa;
}
void MTech::display(){
    cout<<regNo<<name<<age<<cgpa;
}
void MTech::sort(){
    cout<<"SORTING";
}
//BTech CLASS

//-----MAIN FUNCTION
int main(){
    MTech m;
    m.get_details();
    m.display();
    return 0;
}