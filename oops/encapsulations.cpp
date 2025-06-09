#include<iostream>
using namespace std;
class student{
    //default private
    private:
    string studentname;
    string studentStatus;
    int age;

    public:
       //simple comstructor 

    student(){
      //This will initialize the value to the class members whenver we created the object 
       this->studentname = "mukundjha";
       this->studentStatus = "passed";
       this->age = 19;
    };

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
   void setStudentStatus(string m){
     this->studentStatus = m;
   };

   string getStudentStatus(){
    return this->studentStatus;
   }

   void studentInfo(){
    cout<<endl;
    cout<<"students_name :"<<this->studentname<<endl;
    cout<<"studentsStatus :"<<this->studentStatus<<endl;
    cout<<"studentsAge : "<<this->age<<endl;
   }
};
int main(){
  //dynamic objects 
  student *t = new student;
  //setting the value to the class members using set method
  //  t->setStudentname("mukundjha");
  //  t->setStudentStatus("passed");
  //  t->setAge(18);
  cout<<"studentname-> "<<t->getStudentname()<<endl;
  cout<<"studentstatus->"<<t->getStudentStatus()<<endl;
  t->studentInfo();//function call

  //stack based objects
  student s1;
  s1.studentInfo();//function call
  s1.setStudentname("amityadav");
  cout<<s1.getStudentname()<<endl;
  cout<<"studentName : "<<t->getStudentname()<<endl;

   
}