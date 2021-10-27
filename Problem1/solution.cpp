#include<iostream>

using namespace std;

int main(){
    //variable declarations
    int num,i;
    bool isPrime=true;
    //read the number
    cout<<"Enter the number";
    cin>>num;

    for(i=2;i<=num/2;i++){
        if(num % i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime==false){
        cout<<"Not a Prime Number"<<endl;
    }else{
        cout<<"Prime number"<<endl;
    }
    
    return 0;
}