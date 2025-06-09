#include<iostream>
using namespace std;

class Employee{
  public:
  string * name;
//simple constructor
Employee(string value){
  name = new string(value);
};

//user default copy constructor
Employee(Employee &h1){
  name = new string(*h1.name );
};

void display(){
  cout<<"name: "<<*name<<endl;
};

};
int main(){
   //stack based object;
   Employee h1("mukund jha");
   h1.display(); //mukund jha
  
   //new object employee;
   Employee h2 = h1;  //= 
   h2.display();

   *(h1.name) = "satyam jha";  //h1 ka naam change kiyea name ="satyam jha"
   h1.display();
   h2.display();

};