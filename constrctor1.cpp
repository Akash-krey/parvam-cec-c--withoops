#include<iostream>
using namespace std;
class Customer{
  public:
  string firstName,lastName;
  int age,rating;
  Customer(){
    firstName = " john";
    lastName  ="doe";
    age =10;
    rating=5;
  }
  void showdetails(){
    cout<<"customer name:"<<firstName<<" "<< lastName<<endl;
    cout<<"customer Age:"<<age<<endl; 
 }
 void giveRating(int rate);
 void showRating(int rate);
cout<<" you've given"<<rating<<" star rating. THANKS YOU!"<<endl;

}