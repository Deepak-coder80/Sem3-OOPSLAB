#include <iostream>



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
    std::cout<<"Enter the two numbers";
    std::cin>>num1>>num2;
    //fucntion calliing
    gcd = findGCD(num1,num2);

    std::cout<<"GCD of "<<num1 <<" and "<<num2<<" is "<<gcd<<std::endl;

    return 0;
}