#include<iostream>
using namespace std;
class student{
    //default private
    private:
    string studentname;
    int age;

    public:

    void displayinfo(){
        cout<<"studentname : "<<this->studentname<<endl;
        cout<<"studentage: "<<this->age<<endl;
    }

    //we use getters and setters to implement
    public:

    void setStudentname(string k){
       this->studentname = k;
    };

    string getStudentname(){
        return this->studentname;
    };

    void setAge(int j){
        this->age = j;
    }

    int getAge(){
      return this->age;
    }

};
int main(){
  //stack based object 
  student *t = new student;
  t->setStudentname("mukundjha"); //set the name to mukundjha
  cout<<"studentName : "<<t->getStudentname()<<endl; //getting the name 

  t->setAge(18);
  cout<<"age:"<<t->getAge()<<endl;
  t->displayinfo(); //function calll
   
}