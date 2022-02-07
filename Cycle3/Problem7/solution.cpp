#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdlib>

#define SIZE 100

using std::cout;
using std::cin;
using std::endl;
using std::setw;


//------CLASSES-------
class Student{
    protected:
        std::string name;
        int age;
        long regNo;
    public:
        virtual void sort(int n){
            cout<<"Sorting in student class"<<endl;
        };        
};
class MTech:public Student{
    private:
        double cgpa;
    public:
        void sort(int);
        void get_details();
        void display(int);       
};
class BTech:public Student{
    private:
        double mark;
    public:
        void sort(int );
        void get_details();
        void display(int);       
};

//----MEMBER FUNCTION DECLARATIONS------
//MTECH CLASS
void MTech::sort(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;i++){
            //check whether the cgpa where same
            if(this[j].cgpa==this[j+1].cgpa){
                //then sort according to name
                if(this[j].name.compare(this[j+1].name)> 0){
                    MTech temp = this[j];
                    this[j]=this[j+1];
                    this[j+1]=temp;
                }
            }else{
                if(this[j].cgpa>this[j+1].cgpa){
                    MTech temp = this[j];
                    this[j]=this[j+1];
                    this[j+1]=temp;
                }
            }
        }
    }
    cout<<endl;
    cout<<"slNo"<<setw(5)<<" regNo"<<setw(10)<<"name"<<setw(5)<<"age"<<setw(8)<<"mark"<<endl;
    for(int i=0;i<n;i++){
        this[i].display(i+1);
    }
}
void MTech::get_details(){
    cout<<"Enter regNo:";
    cin>>regNo;
    cout<<"Enter name : ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter age :";
    cin>>age;
    cout<<"Enter CGPA:";
    cin>>cgpa;
}
void MTech::display(int slNo){
    cout<<slNo<<setw(8)<<regNo<<setw(10)<<name<<setw(5)<<age<<setw(8)<<cgpa<<endl;
}

//BTECH CLASS
void BTech::sort(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;i++){
            //check whether the cgpa where same
            if(this[j].mark==this[j+1].mark){
                //then sort according to name                
                if(this[j].name.compare(this[j+1].name)> 0){
                    BTech temp = this[j];
                    this[j]=this[j+1];
                    this[j+1]=temp;
                }
            }else{
                if(this[j].mark>this[j+1].mark){
                    BTech temp = this[j];
                    this[j]=this[j+1];
                    this[j+1]=temp;
                }
            }
        }
    }
    cout<<endl;
    cout<<"slNo"<<setw(5)<<" regNo"<<setw(10)<<"name"<<setw(5)<<"age"<<setw(8)<<"mark"<<endl;
    for(int i=0;i<n;i++){
        this[i].display(i+1);
    }
}
void BTech::get_details(){
    cout<<"Enter regNo:";
    cin>>regNo;
    cout<<"Enter name : ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter age :";
    cin>>age;
    cout<<"Enter mark:";
    cin>>mark;
}
void BTech::display(int slNo){
    cout<<slNo<<setw(8)<<regNo<<setw(10)<<name<<setw(5)<<age<<setw(8)<<mark<<endl;
}

//MAIN FUNCTION
int main(){
    int option,choice,n;

    MTech mTStd[SIZE];
    BTech bTStd[SIZE];
    Student* sptr; //base class type pointer

    cout<<"\t\t****STUDENT MANAGEMENT******"<<endl;

    do
    {
        cout<<"\nPlease select one option to continue : "<<endl;
        cout<<"\nEnter 1 for add B.Tech Student data and display  data in sorted order "<<endl;
        cout<<"Enter 2 for add M.Tech Student data and display  data in sorted order "<<endl;        
        cout<<"Enter 3 for exit "<<endl;
        cout<<"\nEnter your option here : ";
        cin>>option;

        switch (option)
        {
        case 1:
            /* ADD BTECH STUDENT DATA */
            cout<<"Enter number of students want to add:";
            cin>>n;
            for(int i=0;i<n;i++){
                bTStd[i].get_details();
            }
            cout<<"\nDispalying Data........"<<endl;
            sptr=bTStd;
            sptr->sort(n);          
            break;
        case 2:
            /* MTECH STUDENT DATA HANDILE */
            cout<<"Enter number of students want to add:";
            cin>>n;
            for(int i=0;i<n;i++){
                mTStd[i].get_details();
            }
            cout<<"\nDispalying Data........"<<endl;
            sptr=mTStd;
            sptr->sort(n);            
            break;
        case 3:
            exit(0);
            break;
        
        default:
            cout<<"Invalid option";
            break;
        }

        cout<<"\nDo you want to continue ? if yes enter 1 here :";
        cin>>choice;
    } while (choice==1);
   
    return 0;
}