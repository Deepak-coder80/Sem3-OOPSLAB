/*
PROBLEM STATEMENT: write a class to rad integer values for day ,month and year and output
in the following format
25,10,21 -->25 Oct 2021
*/
#include<iostream>

using namespace std;

class Day{
    public:
        int day,month,year;
        string mm;
        void input(){
            cout<<"Enter day : ";
            cin>>day;
            cout<<"Enter month : ";
            cin>>month;
            cout<<"Enter year : ";
            cin>>year;
        }

        void display(){
            switch (month)
            {
            case 1:
                mm = "Jan";
                break;
            case 2:
                mm = "Feb";
                break;
            case 3:
                mm = "Mar";
                break;
            case 4:
                mm = "Apr";
                break;
            case 5:
                mm = "May";
                break;
            case 6:
                mm = "Jun";
                break;
            case 7:
                mm = "Jul";
                break;
            case 8:
                mm = "Aug";
                break;
            case 9:
                mm = "Sep";
                break;
            case 10:
                mm = "Oct";
                break;
            case 11:
                mm = "Nov";
                break;
            case 12:
                mm = "Dec";
                break;
            
            default:
                mm="N/A";
                break;
            }

            cout<<day<<"  "<<mm<<"  "<<year<<endl;
        }
};

int main(){
    Day obj;
    obj.input();
    obj.display();
    return 0;
}