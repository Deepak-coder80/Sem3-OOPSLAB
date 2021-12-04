#include <iostream>

using std::cout;
using std::cin;
using std::endl;
class Test{
    public:
        //function declaration
        double power(double ,int );
        int power(int , int);
        char power(char , int);
};
//function definitions
double Test::power(double n,int p){
    double result =n;

    for(int i=1;i<p;i++){
        result = result *n;
    }
    return result;
}
int Test::power(int n,int p){
    int result =n;

    for(int i=1;i<p;i++){
        result = result *n;
    }
    return result;
}
char Test::power(char n,int p){
    char result =n;

    for(int i=1;i<p;i++){
        result = result *n;
    }
    return result;
}

int main(){
    double d;
    char c;
    int p;
    int data;

    //object of Test class
    Test obj;

    //read datas
    cout<<"Enter value of p:";
    cin>>p;
    cout<<"Enter double value of n:";
    cin>>d;
    cout<<"Enter char value of n :";
    cin>>c;
    cout<<"Enter int value of n :";
    cin>>data;

    //function calls
    cout<<"Passing double and int to power function, result= "<<obj.power(d,p)<<endl;
    cout<<"Passing int and int to power function, result= "<<obj.power(data,p)<<endl;
    cout<<"Passing char and int to power function, result= "<<obj.power(c,p)<<endl;
   

    return 0;
}