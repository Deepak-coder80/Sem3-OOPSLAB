#include <iostream>

using std::cout;
using std::cin;
class Solution
{
private:
    static int array[50];
    static int size;
    
public:

    void input(){
        cout<<"Enter size of array";
        cin>>size;
        cout<<"Enter array elements :";
        for(int i=0;i<size;i++){
            std::cin>>array[i];
        }

    }

    void static avarage(){
        float  sum =0;
        
        for(int i=0;i<size;i++){
            sum += array[i];
            
        }
       
        cout<<"Avarage of elements = "<<(sum/size)<<std::endl;
    }
    void multiplier(int k){
        for(int i=0;i<size;i++){
            array[i] = array[i]*k;
        }
        
    }
    void display(){
        cout<<"Array elements are "<<std::endl;
        for(int i=0;i<size;i++){
            cout<<"["<<array[i]<<"] ,";
        }
        cout<<std::endl;
    }
    void sort(){
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(array[i]>array[j]){
                    
                    int temp = array[i];
                    array[i]=array[j];
                    array[j]=temp;
                   
                }
            }
        }

        display();
    }
    
};
int Solution::array[];
int Solution::size;


int main(){
    int multi;
    Solution obj1;
    Solution obj2;
    Solution obj3;

  

    
    obj1.input();
    obj1.avarage();
    cout<<"Enter the multipiler : ";
    cin>>multi;
    obj2.multiplier(multi);
    obj1.avarage();
    obj3.sort();
    

    return 0;
    
}
