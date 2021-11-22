#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class Triangle{
    private:
        int x1,x2,x3,y1,y2,y3;
        float d1,d2,d3;
    public:
        void input();
        void shrt_dist();
        bool validity();
};
void Triangle::input(){
    cout<<"Enter x1,y1 : ";
    cin>>x1>>y1;
    cout<<"Enter x2,y2 : ";
    cin>>x2>>y2;
    cout<<"Enter x1,y1 : ";
    cin>>x3>>y3;
}


inline void Triangle::shrt_dist(){
    float pow1 =pow((x2-x1),2);
    float pow2=pow((y2-y1),2); 
    d1 = sqrt(pow1+pow2);

    
    pow1 =pow((x3-x2),2);
    pow2=pow((y3-y2),2);
    d2=sqrt(pow1+pow2);

    pow1 =pow((x3-x2),2);
    pow2=pow((y3-y2),2);
    d3=sqrt(pow1+pow2);

    //print the smallest value
    if(d1<d2 && d2<d3){
        cout<<"shortest distance is :"<<d1<<" along the points ("<<x1<<","<<y1<<") and";
        cout<<"("<<x2<<","<<y2<<")"<<endl;
    }else if(d2<d3){
        cout<<"shortest distance is :"<<d2<<"  along the points ("<<x2<<","<<y2<<") and";
        cout<<"("<<x3<<","<<y3<<")"<<endl;
    }else {
        cout<<"shortest distance is :"<<d3<<" along the points ("<<x1<<","<<y1<<") and";
        cout<<"("<<x3<<","<<y3<<")"<<endl;
    }

    if(validity()){
        cout<<"Triangle is valid"<<endl;
    }else {
        cout<<"Triangle is not-valid"<<endl;
    }
}

bool Triangle::validity(){
    if(d1<=1.0||d2<=1.0||d3<=1.0){
        return false;
    }
    if((d1+d2)>d3 && (d1+d3)>d2 && (d2+d3)>d1 ){
        return true;
    }

    return false;
}


int main(){
    Triangle t1;

    t1.input();
    t1.shrt_dist();

    return 0;
}