#include<iostream>
using namespace std;

//super class //base class 
 class Socialmedia{
    public:
    string username;
    string password;
    string profile;

    void verify_details(string username,string password){
      if(this->username == username && this->password == password ){
        cout<<" profile = "<<this->profile<<endl;
      }else{
        cout<<"Enter the correct username && password "<<endl;
      }
    }
 };

 class facebook : public Socialmedia{
   public:
   string user_id;
   string user_profile;
   string  like;
   string comment;
    
   void get_facebook_details(){
    cout<<" userid = "<<this->user_id<<endl;
    cout<<" user_profile = "<<this->user_profile<<endl;
    cout<<" like =  "<<this->like ;
    cout<<" comment =  "<<this->comment;
   }};

//another derieved class 
class Instagram : public Socialmedia {
 public:
 string user_id;
 string user_profile;
 string like;
 string comment;

 Instagram(string user_id,string user_profile,string like,string comment){  //paramterized constructor
     this->user_id = user_id;
     this->user_profile = user_profile;
     this->like = like;
     this->comment = comment;
 }

 void getinstagram(){
    cout<<" user_id = "<<this->user_id<<endl;
    cout<<" user_profile = "<<this->user_profile<<endl;
    cout<<" like = "<<this->like<<endl;
    cout<< " comment = "<<this->comment<<endl;
 }
};
int main(){
   //creating the object 
   Instagram *t1 = new Instagram("mukund78","mukund986","2M","100k");
   t1->username = "mukundjha";  //set the username;
   t1->password = "mukund12345"; //set the password;
   t1->profile = "Insta Mukund jha";   //set the profile;
   t1->verify_details(t1->username,t1->password);
   t1->getinstagram();//function call
   cout<<endl;
   cout<<endl;
   facebook  h1; //facebbok object
   h1.user_id = "mukund87";
   h1.user_profile = "facebbok mukundjha";
   h1.like = "78k";
   h1.comment = "99k";
   h1.get_facebook_details();//getting the facebbok deatils;
   return 0;
}