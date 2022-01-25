
/*******************************************************************************
Title    : Operator Overloading - + and <
Author   : Deepak M S 
Roll No  : 20220032
*******************************************************************************/



#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Measure{
    private:
        int feet;
        float inch;
    public:
        void setData();
        void display();
        void operator < (Measure );
        friend Measure operator +(Measure , Measure);
};

void Measure::setData(){
    cout<<"Enter feet measure :";
    cin>>feet;
    cout<<"Enter inch measure :";
    cin>>inch;
}

void Measure::display(){
    cout<<feet<<"feet and"<<inch<<"Inch"<<endl;
}

void Measure::operator<(Measure m){
    //convert feet into inch
    float inch1 = (feet*12)+inch;//explicit
    float inch2 = (m.feet*12)+m.inch;

    if(inch1<inch2){
        cout<<feet<<"feet and "<<inch<<"inch is less than "<<m.feet<<"feet and "<<m.inch<<"inch"<<endl;
    }else{
        cout<<m.feet<<"feet and "<<m.inch<<"inch is less than "<<feet<<"feet and "<<inch<<"inch"<<endl;
    }
}

Measure operator +(Measure m1,Measure m2){
    Measure result;

    result.feet = m1.feet +m2.feet;
    result.inch = m1.inch + m2.inch;

    if(result.inch>=12){
        result.feet++;
        result.inch -= 12;
    }

    return result;
}

int main(){

    Measure obj1,obj2,obj3;

    obj1.setData();
    obj2.setData();

    obj3 = obj1+obj2;
    obj3.display();
    obj1<obj2;

    return 0;
}
