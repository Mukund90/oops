#include<iostream>
using namespace std;

class Animal{
    public:
    string AnimalName;
    string Animalcolor;


    void speak(string name){
        this->AnimalName = name;
        cout<<this->AnimalName<<" is speaking "<<endl;
    };

};

class Dog : public Animal{
    public :
   //user defiend constructor
   Dog(){
    this->AnimalName = "Moti";
    this->Animalcolor = "Black";

   };

    void bark(){
        //function of the Animal parents class passing the arguments
        this->speak("Moti");
    }
};
int main(){
    //stack based objects;
    Dog d1;
    d1.bark();//function call
    cout<<"DogName :"<<d1.AnimalName<<endl;
    cout<<"DogColor :"<<d1.Animalcolor<<endl;
}


  