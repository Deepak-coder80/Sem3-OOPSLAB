#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swap_by_value(int x ,int y){
    int temp = x;
    x=y;
    y=temp;
}

void swap_by_address(int *x , int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void swap_by_reference(int &x,int &y){
    int temp = x;
    x = y;
    y=temp;
}

int main(){
    int a = 6;
    int b =7;
    cout<<"Initial values of a = "<<a<<" and b = "<<b<<endl;
    swap_by_value(a,b);
    cout<<"\nAfter call by value method value of a = "<<a<<" and b = "<<b<<endl;
    swap_by_address(&a,&b);
    cout<<"\nAfter call by address method value of a = "<<a<<" and b = "<<b<<endl;
    swap_by_reference(a,b);
    cout<<"\nAfter call by reference method value of a = "<<a<<" and b = "<<b<<endl;
    return 0;
}