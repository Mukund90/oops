#include<iostream>
using namespace std;

class rectangle{
    public:
  int length;
  int breadth;

//  // user defiend default constructor
//   rectangle(){
//      length = 0;
//      breadth = 0;
//      cout<<"User Default constructor called "<<endl;
//   };

  //paramterized constructor
  rectangle(int l,int b){
    this->length = l;
    this->breadth = b;
    cout<<"parmaterized constructor called "<<endl;
  };

  int claculate_area(){
    return length * breadth;
  };


  void display(){
    cout<<"length : "<<this->length<<" breadth : "<<this->breadth<<endl;
  };
  
};
int main(){
   //stack based object
   cout<<"main excution start "<<endl;
   rectangle a(10,20);
    a.display(); //function call
   cout<<"area of the rectangle is : "<<a.claculate_area()<<"sqm"<<endl;
    cout<<"main execution ends "<<endl;
}