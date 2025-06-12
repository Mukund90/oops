#include<iostream>
using namespace std;
class fruits{
    public: //my parents class is the public and the child classs is also public therfore its become public:
    string color;
    string fruitsName;
    string taste;
    
    //simle constructor creating 
    fruits(){
        cout<<endl;
        this->color = "yellow";
        this->fruitsName = "mangoes";
        this->taste = "very tasty";
        cout<<endl;
    };
};

class apple : public fruits{
   public:
   string price;

   apple(){
    this->price = "$1000";
   }
   void display(){
    cout<<"fruitscolor : "<<this->color<<endl;
    cout<<"fruitsTaste : "<<this->taste<<endl;
    cout<<"fruitsName : "<<this->fruitsName<<endl;
    cout<<"prices : "<<this->price<<endl;
   };
};

int main(){
  //stack based object 
  apple h1;
  h1.display(); //function call
  h1.fruitsName = "banana";
  h1.color = "yellowish ";
  h1.taste = "good";
  h1.price = "89";
  h1.display();//print all the data members of the frits class

    fruits g;
   cout<<"color : "<<g.color<<endl;
   cout<<"tasty : "<<g.taste<<endl;

}

 //public =>private karuu to  private hoga usko acess karnea ke liyea  getters settrs ka used karna padega.
#include<iostream>
using namespace std;
class vechicle{
    public :
    string name;
    string color;
    //comnstructor simply 
    vechicle(){
      this->name = "maruti";
      this->color = "slate gray";
    };
 };

 class Bike:private vechicle{
   private:
   string speed;
   
   public:
   Bike(){
    this->color = "blue";
    this->name = "kawasakhi";
    this->speed = "67kmphr";

   }

   string getName(){
    return this->name;
   }
  string getColor(){
    return  this->color;
  };
  string getSpeed(){
      return this->speed;
    }

  //function 
  void display(){
    cout<<"name : "<<this->name<<endl;
    cout<<"color: "<<this->color<<endl;
    cout<<"speed: "<<this->getSpeed()<<endl;
  }

  void setName(string h){
    this->name = h;
  }
 };


int main(){
  //stack based object 
  //objects of the bike class 
  Bike t1;
  cout<<"name : "<<t1.getName()<<endl;
  cout<<"color: "<<t1.getColor()<<endl;
  t1.setName("hondacity");
  cout<<"name : "<<t1.getName()<<endl;
  t1.display();

  //objects for vechicle class'
  vechicle v1;
  cout<<"name:"<<v1.name<<endl;
  cout<<"color : "<<v1.color<<endl;
  return -1;
};

/* public->> protected => protected hoga*/

