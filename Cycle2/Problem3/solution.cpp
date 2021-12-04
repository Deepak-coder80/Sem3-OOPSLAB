//CONVERT IT INTO CLASS AND OBJECT CONCEPT
//TO WRITE PROGRAM IN CPP FOR SWAPPING 2 INTEGER
//VALUES OF ONE OBJECT.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//function definitions
//call by value 
void swap_by_value(int x,int y){
    //swap
    int temp =  x;
    x=y;
    y=temp;

    cout<<"Value of formal are x = "<<x<<" and y = "<<y<<endl;

}

//call by address
void swap_by_address(int *x , int *y){
    int temp =  *x;
    *x=*y;
    *y=temp;

    cout<<"Value of formal are x = "<<*x<<" and y = "<<*y<<endl;
}

//call by reference
void swap_by_reference(int &x, int &y){
    int temp =  x;
    x=y;
    y=temp;

    cout<<"Value of formal are x = "<<x<<" and y = "<<y<<endl;

}

int main(){
    int a, b;
    //read the input
    cout<<"Enter two integer value";
    cin>>a>>b;

    cout<<"\n\tCALL BY VALUE \n"<<endl;
    cout<<"Before Passing ,Value of actual parmeters are a = "<<a<<" and b = "<<b<<endl;
    swap_by_value(a,b);
    cout<<"After Passing ,Value of actual parmeters are a = "<<a<<" and b = "<<b<<endl;

    cout<<"\n\tCALL BY ADDRESS \n"<<endl;
    cout<<"Before Passing ,Value of actual parmeters are a = "<<a<<" and b = "<<b<<endl;
    swap_by_address(&a,&b);
    cout<<"After Passing ,Value of actual parmeters are a = "<<a<<" and b = "<<b<<endl;


    cout<<"\n\tCALL BY REFERENCE \n"<<endl;
    cout<<"Before Passing ,Value of actual parmeters are a = "<<a<<" and b = "<<b<<endl;
    swap_by_reference(a,b);
    cout<<"After Passing ,Value of actual parmeters are a = "<<a<<" and b = "<<b<<endl;

    return 0;
}