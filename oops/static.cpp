#include<iostream>
using namespace std;

class Test{
    private:
    int a;
    int b;
    public:
    static int count;
    //simple constructor to initialize the a and b
    Test(){
        a = 10;
        b = 20;
        count ++;
    };
    //static data memeber functions
    static int get_count(){
     return count;
    };

    int getA(){
     return a;
    };

    int getB(){
        return b;
    }
};
int Test ::count = 0;
int main(){
     //calling the static memeber functions
     cout<<endl;
     cout<<"count called without objects : "<<Test::get_count()<<endl;
  //acessing the static variable count 
//   cout<<Test::count<<endl;
 //datatype + classname  + :: //scope resoultion operator + varaiblename
 //simple objects created 
 Test t1;
 cout<<"a : "<<t1.getA()<<endl;
 cout<<"b : "<<t1.getB()<<endl;
//  cout<<"count : "<<t1.count<<endl;
 cout<<"count called with objects : "<<t1.get_count()<<endl;


 //objected created
  Test t3;
  cout<<"a : "<<t3.getA()<<endl;
  cout<<"b : "<<t3.getB()<<endl;
  cout<<"count : "<<t3.count<<endl;
  cout<<Test::count<<endl;

  return 0;
};