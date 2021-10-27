#include <iostream>

using namespace std;

//function for findig GCD

int findGCD(int num1,int num2){
    if(num1==0){
        return num2;
    }
    if(num2==0){
        return num1;
    }

    if(num1>num2){
        return findGCD(num1%num2,num2);
    }else {
        return findGCD(num1,num2%num1);
    }
}

int  main(){
    int num1,num2,gcd;
    //read the numbers 
    cout<<"Enter the two numbers";
    cin>>num1>>num2;
    //fucntion calliing
    gcd = findGCD(num1,num2);

    cout<<"GCD of "<<num1 <<" and "<<num2<<" is "<<gcd<<endl;

    return 0;
}