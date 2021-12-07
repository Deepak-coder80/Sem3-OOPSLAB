#include <iostream>

using std::cout;
using std::cin;
using std::endl;


//function for checking the year is leap year or not
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
//function for checking the validity of the date
bool validator(int month,int day , int year){

    if(year<0){
        return false;
    }
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
class Date{
    private:
	int day;
	int month;
	int year;
    public:
	void setDate();
	void display();
	Date operator+(int d){
		Date newDate;
	
		if(validator(month,day,year)){
            //check whether month is 2
            if(month == 2){
                //check whether the year is leap year
                if(leapyear(year)){
                    if((day+d)>=29){
                        if((day+day)-29==0){
                            newDate.day=29;
                            newDate.month=month;
                            newDate.year=year;
                        }else{
                            newDate.day=(day+d)-29;
                            newDate.month=month+1;
                            newDate.year=year;
                        }
                        
                    }else{
                        newDate.day=day+d;
                        newDate.month=month;
                        newDate.year=year;
                    }
                }else{
                    if((day+d)>=28){
                        if((day+day)-28==0){
                            newDate.day=28;
                            newDate.month=month;
                            newDate.year=year;
                        }else{
                            newDate.day=(day+d)-28;
                            newDate.month=month+1;
                            newDate.year=year;
                        }
                    }else{
                        newDate.day=day+d;
                        newDate.month=month;
                        newDate.year=year;
                    }
                }
            }else if(month ==4||month==6||month==9||month==11){
                    if((day+d)>=30){
                        if((day+day)-30==0){
                            newDate.day=30;
                            newDate.month=month;
                            newDate.year=year;
                        }else{
                            newDate.day=(day+d)-30;
                            newDate.month=month+1;
                            newDate.year=year;
                        }
                    }else{
                        newDate.day=day+d;
                        newDate.month=month;
                        newDate.year=year;
                    }
            }else if(month==12){
                    if((day+d)>=31){
                        if((day+day)-31==0){
                            newDate.day=31;
                            newDate.month=month;
                            newDate.year=year;
                        }else{
                            newDate.day=(day+d)-31;
                            newDate.month=1;
                            newDate.year=year+1;
                        }
                    }else{
                        newDate.day=day+d;
                        newDate.month=month;
                        newDate.year=year;
                    }
            }else{
                    if((day+d)>=31){
                        if((day+day)-31==0){
                            newDate.day=31;
                            newDate.month=month;
                            newDate.year=year;
                        }else{
                            newDate.day=(day+d)-31;
                            newDate.month=month+1;
                            newDate.year=year;
                        }
                    }else{
                        newDate.day=day+d;
                        newDate.month=month;
                        newDate.year=year;
                    }

            }
        }else{
            cout<<"Enter a Valid Date!!"<<endl;
        }
		return newDate;
	}

};
void Date::setDate(){
	cout<<"Enter day:";
	cin>>day;
	cout<<"Enter month:";
	cin>>month;
	cout<<"Enter year:";
	cin>>year;
}

void Date::display(){
    // if(validator(month,day,year)){
	    cout<<"\nDate is "<<day<<"/"<<month<<"/"<<year<<endl;
    // }
}


int main(){
    int a;
	//object creation
	Date obj1,obj2;
	obj1.setDate();
	obj1.display();
	
	
    cout<<"Enter the number of day want to add:";
    cin>>a;
	obj2 = obj1 + a;

    
	obj2.display();

	return 0;
}


