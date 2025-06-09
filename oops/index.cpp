#include<iostream>
using namespace std;

class Employee{
  public:
  string EmpName;
  string Branch;

  Employee(string name1){
    EmpName = name1;
    cout<<"this : "<<this<<endl;

  };

  private:
  int id;

  public:
  void setID(int idk){
    this->id = idk;
  };

  int& getID(){
   return id;
  }
};

int main(){
  //static object creations
  Employee t("sristi");
  t.EmpName="mukundjha";
  t.Branch = "softwareEngineer";
  cout<<"EmployeeName : "<<t.EmpName<<endl;
  cout<<"Branch: "<<t.Branch<<endl;
  t.setID(101);
  cout<<"Id :"<<t.getID()<<endl;
  cout<<"address of the object t is :"<<&t<<endl;


  //dynamic object creations
  //  Employee *t1 = new Employee ;
  //  cout <<"address of the t1 is : "<<&t1<<endl;
  //  cout <<"address of the employee is :"<<&(*t1)<<endl;
  //  (*t1).EmpName="mukund jha";
  //  cout <<"EmolyeeName : "<<(*t1).EmpName<<endl;
  //  cout <<"Address of the EmployeeName : "<<&(*t1).EmpName<<endl;
  //  t1->setID(100);
  //  cout<<"Id :"<<(*t1).getID()<<endl;
  //  cout<<"address of the id is : "<<&(*t1).getID()<<endl;
  //  //delete allocated memory ko 
  //  delete t1; 
  //  return 0;
  //  cout<<t1<<endl;




}