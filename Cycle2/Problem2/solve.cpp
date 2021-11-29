#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//functions.
inline float minimum(float data1,float data2,float data3){
    if(data1<data2 && data1<data3){
        return data1;
    }else if(data2<data3){
        return data2;
    }

    return data3;
}
bool validator(float d1,float d2,float d3){
    if(d1<0||d2<0||d3<0){
        return false;
    }
    if((d1+d2)>d3 && (d1+d3)>d2 && (d2+d3)>d1 ){
        return true;
    }

    return false;
}
int main(){
    int x1,y1,x2,y2,x3,y3;
    float d1,d2,d3;

    cout<<"Enter x1,y1 : ";
    cin>>x1>>y1;
    cout<<"Enter x2,y2 : ";
    cin>>x2>>y2;
    cout<<"Enter x3,y3 : ";
    cin>>x3>>y3;

    float pow1 =pow((x2-x1),2);
    float pow2=pow((y2-y1),2); 
    d1 = sqrt(pow1+pow2);

    
    pow1 =pow((x3-x2),2);
    pow2=pow((y3-y2),2);
    d2=sqrt(pow1+pow2);

    pow1 =pow((x3-x2),2);
    pow2=pow((y3-y2),2);
    d3=sqrt(pow1+pow2);

    cout<<"The shortest distance between cooridinates is :"<<minimum(d1,d2,d3)<<endl;

    if(validator(d1,d2,d3)){
        cout<<"Triangle is valid"<<endl;
    }else {
        cout<<"Triangle is not-valid"<<endl;
    }

    return 0;
}
//Read the inputs
//calculate the distance
//pass to inline function
//check validity using validator function.