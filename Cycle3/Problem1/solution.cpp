/********************************************
NAME : DEEPAK M S
REG.NO. : 20220032
********************************************/

#include<iostream>

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
bool validator(int day,int month,int year){

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
		int day,month,year;
	public:
		Date(int day,int month,int year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void operator +(int a){
			
			if(validator(day,month,year)){
			day+=a;
			do{
            if(day>31 && (month==1||month==3||month==5||month==7||month==8||month==10||month==12)){
				day=day-31;
				if(month==12){
					year=year+1;
					month=1;
				}else{
					month=month+1;
				}
			}else if(day>30 && (month==4||month==6||month==9||month==11)){
				day=day-30;
				if(month==12){
					year=year+1;
					month=1;
				}else{
					month=month+1;
				}
			}else if((month==2)&&(day>28)){
               			if(leapyear(year)){
							   if(day ==29){
								   //do nothing
							   }else {
								   day =day-29;
								   month=3;
							   }
							   

               			}
              			 else{
				 	day=day-28;
                 			 month=3;
                   		}
           	 }
		}while(day>31);
		
		}else{
			cout<<"Date is invalid"<<endl;
			}		
					
		

		}

		void display(){
			if(validator(day,month,year)){
				cout<<"The date is "<<day<<"/"<<month<<"/"<<year<<endl;
			}
		}
		
};

int main(){
	int day,month,year;
	int n;
	cout<<"Enter date: ";
	cin>>day>>month>>year;
	Date date(day,month,year);
	 cout<<"Enter the number of day want to add:";
	cin>>n;
	date+n;
	date.display();
	
return 0;
}
