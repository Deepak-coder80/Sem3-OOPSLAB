#include<iostream>



int main(){
    //variable declarations
    int num,i;
    bool isPrime=true;
    //read the number
    std::cout<<"Enter the number";
    std::cin>>num;

    for(i=2;i<=num/2;i++){
        if(num % i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime==false){
        std::cout<<"Not a Prime Number"<<std::endl;
    }else{
        std::cout<<"Prime number"<<std::endl;
    }
    
    return 0;
}