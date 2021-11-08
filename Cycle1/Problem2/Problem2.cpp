#include<iostream>
using std::cout;
using std::endl; 
using std::cin; 

bool leapyear(int year){
     if (year % 400 == 0){
        return true;
     }
    if (year % 100 == 0){
        return false;
    }
    if (year % 4 == 0){

        return true;
    }
    return false;
}

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        void input();
        bool validator();
        void display();
};

void Date::input(){
    cout<<"Enter the day dd :";
    cin>>day;
    cout<<"Enter the month mm :";
    cin>>month;
    cout<<"Enter the year yyyy :";
    cin>>year;
}

bool Date::validator(){
    if(month<1||month>12){
        return false;
    }
    if(day<1||day>31){
        return false;
    }

    if(month==2){
        if(leapyear(year)){
            if(day>29){
                return false;
            }
        }else{
            if(day>28){
                return false;
            }
        }
    }

    if (month ==4||month==6||month==9||month==11){
        if(day>30){
            return false;
        }
    }

    return true;
}

void Date::display(){
     bool result = validator();
   

    //print new date
    if(month==2){
       if(leapyear(year)){
            if(day==29){
                day=1;
                month++;
            }else{
                day++;
            }
        }else{
            if(day==28){
                day=1;
                month++;
            }else{
                day++;
            }
        }
       
    }else if(month ==4||month==6||month==9||month==11){
        if(day==30){
            day=1;
            month++;
        }else{
            day++;
        }
    }else if(month==12){
        if(day==31){
            day=1;
            month=1;
            year++;
        }else{
            day++;
        }
    }else{
        if(day==31){
            day=1;
            month++;
        }else{
            day++;
        }
    }
   
    
    (result==true)?cout<<"Valid\t Next Date :"<<day<<"/"<<month<<"/"<<year<<endl:cout<<"Not valid"<<endl;
    
}

int main(){
    //object of Date class
    Date date;

    date.input();
    date.display();

    return 0;
}
