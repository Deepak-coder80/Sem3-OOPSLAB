#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Bank{

    private:
        int size;
        char account_holder[10][10];
        char account_type[10][10];
        double balance[20];
        long int account_number[20];
    public:
        void  checkBalance();
        void displayBalance(int i);
        void intialvalues();
        void withdraw();
        void deposit();
};
void Bank::intialvalues(){
    
    cout<<"\n ASSIGN VALUES HERE"<<endl;
    cout<<"Enter how many users want to add? : ";
    cin>>size;
    cout<<"\t\tWarning: Please enter deltails in sorted order of account number!!!!"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter account number : ";
        cin>>account_number[i];
        cout<<"Enter account holder's name : ";
        cin>>account_holder[i];
        cout<<"Enter account type : ";
        cin>>account_type[i];
        cout<<"Enter account balance : ";
        cin>>balance[i];
    }
}
void Bank::deposit(){
    long search;
    int amount;
    cout<<"enter the account number want to deposit : ";
    cin>>search;

    for(int i=0;i<size;i++){
        if(account_number[i]==search){
            cout<<"Enter amount wanted to deposit:";
            cin>>amount;
            balance[i] += amount;
            displayBalance(i);
            return;
        }        
    }

    cout<<"Account number cannot found!!"<<endl;

}
void Bank::withdraw(){
    long search;
    int amount;
    cout<<"enter the account number want to withdraw the amount : ";
    cin>>search;

    for(int i=0;i<size;i++){
        if(account_number[i]==search){
            cout<<"Enter amount wanted to withdraw:";
            cin>>amount;
            if(balance[i]==0){
                cout<<"CANOOT WITHDRAW"<<endl;
                return;
            }else if(amount>balance[i]){
                cout<<"CANOOT WITHDRAW"<<endl;
                return;
            } else{
                balance[i] -= amount;
                displayBalance(i);
                return;
            }
            
        }        
    }

    cout<<"Account number cannot found!!"<<endl;
}
void Bank::checkBalance(){
    long search;
    
    cout<<"enter the account number want to withdraw the amount : ";
    cin>>search;

    for(int i=0;i<size;i++){
        if(account_number[i]==search){
                      
            displayBalance(i);
            return;
        }        
    }

    cout<<"Account number cannot found!!"<<endl;
}

void Bank::displayBalance(int i){
    cout<<"\n*************ACCOUNT DETAILS******"<<endl;
    cout<<"\tAccount Holder : "<<account_holder[i]<<endl;
    cout<<"\tAccount Type   : "<<account_type[i]<<endl;
    cout<<"\tAccount Number : "<<account_number[i]<<endl;
    cout<<"\tCurrent Balance: "<<balance[i]<<endl;
    cout<<"**************************************"<<endl;
}
int main(){
     int choice,option;
     //object of class
    Bank bank;
    cout<<"############WELCOME TO ADMIN CONSOLE############"<<endl;
    cout<<"Data is empty so please enter data"<<endl;
    bank.intialvalues();
     do{
        cout<<"\nPlease select an option to continue: "<<endl;
        cout<<"\n\t Enter 1 for deposit to an account "<<endl;
        cout<<"\t Enter 2 for  withdraw from an account"<<endl;
        cout<<"\t Enter 3 for check balance\n Enter the option here:";
        cin>>choice;
        switch(choice){
        case 1: 
            bank.deposit();
            break;
        case 2:
            bank.withdraw();
            break;
        case 3:
            bank.checkBalance();
            break;
        default:
            cout<<"Invalid entry:";
            break;
        }


        cout<<"Do you want to continue? if yes enter 1 here: ";
        cin>>option;
    }while(option==1);

    return 0;
}
