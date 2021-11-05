#include <iostream>

//define the structure
struct Phone{
    int area_code;
    int exchange;
    int number;
};

int main(){
    //structure variables
    Phone phone1;
    Phone phone2;

    //assignments of phone1
    phone1.area_code=212;
    phone1.exchange=767;
    phone1.number=8900;

    //read the values of phone 2 from user
    std::cout<<"Enter area code : ";
    std::cin>>phone2.area_code;
    std::cout<<"Enter exchange code : ";
    std::cin>>phone2.exchange;
    std::cout<<"Enter number : ";
    std::cin>>phone2.number;


    //print the phone numbers
    std::cout<<"My  number is "<<"("<<phone1.area_code<<") "<<phone1.exchange<<"-"<<phone1.number<<std::endl;
    std::cout<<"Your  number is "<<"("<<phone2.area_code<<") "<<phone2.exchange<<"-"<<phone2.number<<std::endl;
    return 0;
}