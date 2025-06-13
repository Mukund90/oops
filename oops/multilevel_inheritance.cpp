#include<iostream>
using namespace std;
class person {
    public:
    string personName;
    int personAge;
    //constructor
    person(){
        this->personName = "mukundjha";
        this->personAge = 20;
    };

    void display(){
        cout<<"personName : "<<this->personName<<endl;
        cout<<"personAge : "<<this->personAge<<endl;
    }
};

class student : public person{
    public:
    string studentsName;
    int studentsAge;
    //constructor
    student(){
        this->studentsName = "Raman yadav";
        this->studentsAge = 10;
    };
    void display(){
       person ::display(); //call the person class display function
        cout<<endl;
        cout<<"studentsName : "<<this->studentsName<<endl;
        cout<<"studentsAge : "<<this->studentsAge<<endl;
    }
};

class Teacher : public student{
    public:
    static string TeacherName;
    int TeacherAge;
    //constructor
    Teacher(){
        this->TeacherName = "Rohit yadav";
        this->TeacherAge = 90;
    };
    void display(){
        //call the students class display functons
       student :: display();
       cout<<endl;
       cout<<"TeacherAge : " <<this->TeacherAge<<endl;
    };

    static string getName(){
        return TeacherName;
    }  //This is the static function to get the TeacherName;

};

int main(){
   Teacher t;
   t.display();
   return 0; 

}
