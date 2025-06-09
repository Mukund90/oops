#include<iostream>
using namespace std;

class oops{
    private:
    string syallabus;

    public:

    //constructor
    oops(){
        cout<<"constructor is called "<<endl;
    };

    //destructor
    ~oops(){
        cout<<"destructor is called "<<endl;
    };

    void setSyallbus(string t){
       this->syallabus = t;
    };

    string getSyallbus(){
      return syallabus;
    };

};

// void fn1(){
//     cout<<"function execute  chaluu huea "<<endl;
//     oops h1;
//     cout<<"dynamic memory alloaction starts "<<endl;
//     //dynamic memory allocations
//     oops *t1 = new oops();
//     delete t1 ; //destructor dynamic object me khud manullay call karna padtea hai 
//     cout<<"function execute  khatam huea"<<endl;

// }
int main(){
  //stack based memory;
  cout<<"main function execute start huea "<<endl;
  //stack based object
  oops h1;

  //dynamic memory allocated karuuungea
//   oops *h = new oops();
//   delete h ;//dynamic memory allocated in the heap memory
  cout<<"main functiion terminated "<<endl;


};