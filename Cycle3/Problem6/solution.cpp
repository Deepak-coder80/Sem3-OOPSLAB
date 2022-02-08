/*
 Employee class contain details like name,emp no,pay rate, constructor function and a pay() function. 
 Manager class inherits from employee and has the option of drawing pay on hourly basis or salary basis and 
 has an additional data issalaried(bool). Class Supervisor is derived from employee  and has an additional field
  department and is always salaried. Base and both  derived classes should contain pay() function with same name.
*/

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Employee{
    protected:
        string name;
        int emp_id;
        double pay_rate;
        double cur_salary=10000;//dummy salary
    public:
        Employee(string,int,double);
        void pay();
};

class Manager:public Employee{
    private:
        bool isSalaraised;
        double wHour; //worked hour
    public:
        Manager(string,int,double,bool);
        void pay();        
};
class Supervisor:public Employee{
    private:
        string department;
       
        double salary;
    public:
        Supervisor(string,int,double);
        void cDeparment(); //choose department
        void pay();
        void paySlip();
};

Employee::Employee(string name , int emp_id, double pay_rate){
    this->name=name;
    this->emp_id=emp_id;
    this->pay_rate=pay_rate;
}
void Employee::pay(){
    double salaray= (cur_salary*pay_rate)/100;
    cout<<"Salary is "<<salaray<<endl;
}

Manager::Manager(string name,int emp_id,double pay_rate,bool isSalarised):Employee(name,emp_id,pay_rate){
    this->isSalaraised=isSalaraised;
}

void Manager::pay(){
    if(isSalaraised==false){
       double temp= (cur_salary*pay_rate)/100;
       double salary=0;
      salary=cur_salary+temp;
        cout<<"\n\t\t PAY SLIP "<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Empolye ID : "<<emp_id<<endl;
        cout<<"Name : "<<" " <<name<<endl;
        cout<<"Status : "<<"Salarised*"<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"---------------------"<<endl;
        cout<<"*Not in Hourly mode"<<endl;
    }else{
        cout<<"Enter worked hour : ";
        cin>>wHour;
         double temp= (cur_salary*pay_rate)/100*wHour;
        double salary=0;
        salary=cur_salary+temp;
        cout<<"\n\t\t PAY SLIP "<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Empolye ID : "<<emp_id<<endl;
        cout<<"Name : "<<" " <<name<<endl;
        cout<<"Status : "<<"Salarised*"<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"---------------------"<<endl;
        cout<<"*In Hourly mode"<<endl;
    }

}

Supervisor::Supervisor(string name ,int emp_id ,double pay_rate):Employee(name,emp_id,pay_rate){}
    

void Supervisor::cDeparment(){
     int choice;
    cout<<"Enter your department :"<<endl;
    cout<<"Enter 1 for HR deparment "<<endl;
    cout<<"Enter 2 for planning deparment"<<endl;
    cout<<"Enter 3 for production deparment"<<endl;
    cout<<"Enter 4 for Testing deparment"<<endl;
    cout<<"Enter here:";
    cin>>choice;

    switch (choice)
    {
    case 1:
        department="HR";
        break;
    case 2:
        department="Planning";
        break;
    case 3:
       department="Production";
        break;
    case 4:
        department="Testing";
        break;
    
    default:
        break;
    }
}

void Supervisor::pay(){
   if(department=="HR"){
       double temp= (cur_salary*pay_rate)/100;
       salary=cur_salary+temp;
       double incriment = (salary *10)/100;       
       salary +=incriment;
   }else if(department=="Planning"){
         double temp= (cur_salary*pay_rate)/100;
         salary=cur_salary+temp;
       double incriment = (salary *15)/100;
       salary +=incriment;
   }else if(department=="Production"){
         double temp= (cur_salary*pay_rate)/100;
        salary=cur_salary+temp;
       double incriment = (salary *20)/100;
       salary +=incriment;
   }else if(department=="Testing"){
       double temp= (cur_salary*pay_rate)/100;
       salary=cur_salary+temp;
       double incriment = (salary *21)/100;
       salary +=incriment;
   }

}

void Supervisor::paySlip(){
    cout<<"\n\t\t PAY SLIP "<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Empolye ID : "<<emp_id<<endl;    
    cout<<"Name : "<<name<<endl;
    cout<<"Department : "<<department<<endl;
    cout<<"Salary : "<<salary<<endl;
    cout<<"---------------------"<<endl;
    
}


int main(){
    int choice;
    string name;
    int emp_id;
    double pay_rate;
    bool isSalarised;
    int input;

    cout<<"Enter Manger Data "<<endl;
    cout<<"Enter name :";
    // cin.ignore();
    cin>>name;
    cout<<"Enter Empolye ID:";
    cin>>emp_id;
    cout<<"Enter pay rate :";
    cin>>pay_rate;
    cout<<"isSlaraised or not ? enter 1 for yes  or 0 for no:";
    cin>>input;

    if(input==0){
        isSalarised=false;
    }else if(input==1){
        isSalarised=true;
    }

    Manager m(name,emp_id,pay_rate,isSalarised);

    cout<<"Enter Supervisor Data "<<endl;
    cout<<"Enter name :";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Empolye ID:";
    cin>>emp_id;
    cout<<"Enter pay rate :";
    cin>>pay_rate;
   
   Supervisor s(name,emp_id,pay_rate);

    

    do
    {
        cout<<"CHOOSE ONE OPTION TO CONTINUE:"<<endl;
        cout<<"1 for pay Manger :"<<endl;
        cout<<"2 for pay Supervisor:"<<endl;
        cout<<"3 for exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            m.pay();
            break;
        case 2:
            s.cDeparment();
            s.pay();
            s.paySlip();
            break;
        case 3:
            exit(0);
            break;
        
        default:
            break;
        }
        cout<<"Do you want to conitinue ? if yes enter 1 here";
        cin>>input;
    } while (input==1);
    


    

    return 0;
}