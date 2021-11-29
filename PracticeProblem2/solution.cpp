#include <iostream>



//function for findig GCD

int findGCD(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    if(a>b){
        return findGCD(a%b,b);
    }
        
    return findGCD(a,b%a);
    
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