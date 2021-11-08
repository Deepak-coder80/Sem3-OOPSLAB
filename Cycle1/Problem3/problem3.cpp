#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Bank{
    private:
        std::string name;
        std::string type;
        double balance;
    public:
        void input();
        void checkBalance();
        void withdraw();
        void deposit();
};

void Bank::input(){
    cout<<"Enter your name";
    cin>>name;
    cout<<"Enter account type";
    cin>>type;
    cout<<"Enter account balance";
    cin>>balance;
}

void Bank::checkBalance(){
    cout<<"\nName : "<<name <<endl;
    cout<<"Balance of your account is : "<<balance<<endl;

}
void Bank::withdraw(){
    int amount;
    checkBalance();
    cout<<"Enter amount wanted to withdraw:";
    cin>>amount;
    balance -= amount;

    
}

void Bank::deposit(){
    int amount;
    cout<<"Enter amount wanted to deposit:";
    cin>>amount;
    balance += amount;

    checkBalance();
}

int main(){
    int choice;
    //object
    Bank user1;
    user1.input();
    cout<<"Please select an option: "<<endl;
    cout<<"\n\t Enter 1 for deposit "<<endl;
    cout<<"\t Enter 2 for check balance and withdraw"<<endl;
    cout<<"\t Enter 3 for check balance\n Enter the option here:";
    cin>>choice;

    switch(choice){
        case 1: 
            user1.deposit();
            break;
        case 2:
            user1.withdraw();
            break;
        case 3:
            user1.checkBalance();
            break;
        default:
            cout<<"Invalid entry:";
            break;
    }
    return 0;
}