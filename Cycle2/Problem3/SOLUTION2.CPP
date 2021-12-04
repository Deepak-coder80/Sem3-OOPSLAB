#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Number{
    private :
        int num;
    public:
       void setData();  
       void displayData();     
       void swapByValue(Number , Number);
       void swapByReference(Number& , Number&);
       void swapByAddress(Number * , Number *);

};
//set the data
void Number::setData(){
            cout<<"Enter the number :";
            cin>>num;
}
//print the data
void Number::displayData(){
    cout<<num;
}
//swap by value
void Number::swapByValue(Number obj1, Number obj2){
    int temp = obj1.num;
    obj1.num=obj2.num;
    obj2.num =temp;

    cout<<"After Swapping value of formal parameters are :"<<endl;
    cout<<" num 1 = "<<obj1.num<<" and num2 ="<<obj2.num<<endl;
}
//swap by refernce
void Number::swapByReference(Number &obj1,Number &obj2){
    int temp = obj1.num;
    obj1.num=obj2.num;
    obj2.num =temp;

    cout<<"After Swapping value of formal parameters are :"<<endl;
    cout<<" num 1 = "<<obj1.num<<" and num2 ="<<obj2.num<<endl;
}
//swap by address
void Number::swapByAddress(Number* obj1,Number* obj2){
    int temp = obj1->num;
    obj1->num = obj2->num;
    obj2->num = temp;

    cout<<"After Swapping value of formal parameters are :"<<endl;
    cout<<" num 1 = "<<obj1->num<<" and num2 ="<<obj2->num<<endl;

}

int main(){
    int choice;
    //objects for Number class 
    Number n1;
    Number n2;

    //set the data to the objects
    n1.setData();
    n2.setData();

    // SWAP BY VALUE     
    cout<<"\n************* SWAP BY VALUE**************** "<<endl;
    //Display Data
    cout<<"Before passing to the swap by value function:\n num1 =   ";
    n1.displayData();
    cout<<" and num2 = ";
    n2.displayData();
    cout<<endl;

    //pass the objects
    n1.swapByValue(n1,n2);

    cout<<"After passing to the swap by value function:\n num1 =  ";
    n1.displayData();
    cout<<" and num2 = ";
    n2.displayData();
    cout<<endl;

    cout<<"\nSelect One Option to Continue : "<<endl;
    cout<<"\t Enter 1 for Swap by Reference \n\t Enter 2 for swap by Address "<<endl;
    cout<<"Enter your option here : ";
    cin>>choice;

    switch(choice){
    case 1:
        //SWAP BY REFERENCE
        cout<<"\n************* SWAP BY REFERENCE**************** "<<endl;
        //Display Data
        cout<<"Before passing to the swap by reference function:\n num1 = ";
        n1.displayData();
        cout<<" and num2 = ";
        n2.displayData();
        cout<<endl;

        //pass the objects
        n1.swapByReference(n1,n2);

        cout<<"After passing to the swap by reference function:\n num1 = ";
        n1.displayData();
        cout<<" and num2 = ";
        n2.displayData();
        cout<<endl;
        break;
    case 2:
        //SWAP BY ADDRESS
        cout<<"\n************* SWAP BY ADDRESS**************** "<<endl;
        //Display Data
        cout<<"Before passing to the swap by address function:\n num1 = ";
        n1.displayData();
        cout<<" and num2 = ";
        n2.displayData();
        cout<<endl;

        //pass the objects
        n1.swapByAddress(&n1,&n2);

        cout<<"After passing to the swap by address function:\n num1 = ";
        n1.displayData();
        cout<<" and num2 = ";
        n2.displayData();
        cout<<endl;
        break;
    default:
        cout<<"INVALID OPTION"<<endl;
        break;
    }
    return 0;
}