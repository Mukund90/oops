#include<iostream>
using namespace std;
//Father class 
//derieved class 
class Father{
    //public
    public:
     string Father_name;
     void identity(){
        cout<<"hello i am your father "<<this->Father_name<<endl;
     }
};
//dereieved class

class Mother{
    public:
    string Mother_name;
    void identity(){
        cout<<"Hello i am your Mother "<<this->Mother_name<<endl;
    }
};

class child : public Father , public  Mother{
    public : //derived class function is public
    string name;
    void identity(){
        cout<<"Hello i am a child of "<<this->Father_name << " "<<"my mother is "<<this->Mother_name<<endl;
    }
};

int main(){
  //make the class of the derieved class and the child class 
  child *c = new child; //dynamic objects 
   c->Father_name = "Jhon doe"; //inherited from the father class  
   c->Mother_name = "Raman yadav"; //inherited from the mothers class
   c->identity(); //function call of the child class 
   c->Mother::identity();//Mother ka identity call karo
   c->Father::identity(); //Father idenity is released 
   return 0;

}