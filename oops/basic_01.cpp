#include<iostream>
using namespace std;
 
class facebook{
   public:
   string username;
   string password;
   private:
   bool authenticated = false;

   public:
   void setAuthenticated(bool auth){
     this->authenticated = auth;
   };

   bool getAuthenticated(string username ,string password){
      if(username== "mukundjha" &&  password == "Mukundjha"){
         authenticated = true;

      }else{
         cout<<"authenticated fails "<<endl;
      }
      return authenticated;
   };
};

int main(){
   //stack based object 
  facebook h1;
  cout<< "Authenticated : "<<h1.getAuthenticated("mukundjha","Mukundjh")<<endl;

  //pointer to the object
  facebook *t1; 
  t1 = new facebook; 
  t1->username = "mukundjha";
  t1->password = "Mukundjha";
  cout<<"Username : "<<t1->username<<endl;
  cout<<"Password : "<<(*t1).password<<endl;
  //authenticated checking ->>
  cout<<"Authenticated : "<<t1->getAuthenticated(t1->username,t1->password)<<endl;
  return 0;
}