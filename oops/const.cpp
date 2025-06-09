#include<iostream>
using namespace std;

class claculatearea{
    private:
    const float pi = 3.14;
    int radius;

    public:
    claculatearea(int r){
        this->radius = r;
    };

    void fn1(float p) const {
        cout<<"pi : " <<this->pi;
    };

    void setRadius(int y){
        this->radius = y;
    };

    float area(){
       float num =  this->pi * (this->radius*this->radius);
       return num;
    }
    
    void getarea(){
        cout<<"pi : "<<this->pi << " : "<<"radius :"<<this->radius<<endl;
    }


};



int main(){
    //stack based object;
    claculatearea h1(6);
    h1.fn1(); //call the function
    cout<<"area of the circle is : "<<h1.area()<<" sqcm. "<<endl;
return 0;
}