/*
 Employee class contain details like name,emp no,pay rate, constructor function and a pay() function. 
 Manager class inherits from employee and has the option of drawing pay on hourly basis or salary basis and 
 has an additional data issalaried(bool). Class Supervisor is derived from employee  and has an additional field
  department and is always salaried. Base and both  derived classes should contain pay() function with same name.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Employee{
    private:
        std::string name;
        int emp_id;
        double pay_rate;
    public:
        Employee(){}
        void pay();
};

class Manager:public Employee{
    public:
        
};