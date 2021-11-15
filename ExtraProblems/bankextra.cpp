#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Bank{

    private:
        char accout_holder[10][10];
        std::string accout_type;
        double balance[20];
        long int account_number[20];
    public:
        void intialvalues();
        void withdraw();
        void deposit();
};
void Bank::intialvalues(){
    cout<<"\n ASSIGN VALUES HERE"<<endl;
}
int main(){

    return 0;
}