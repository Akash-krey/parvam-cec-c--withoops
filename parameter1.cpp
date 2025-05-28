#include<iostream>
 using namespace std;

 class wish{
    private:
     stream name;
     int age;


    public:
    wish(){
        name="unknown";
        age=0;
    }
    wish(string n,int a);

    void birthdaywishes();

    

   
 };
  wish::wish(string n,int a){
    name=n;
    age=a;

  }
  void Birthwishes(){
  cout<<"Happy birthday"<<name<<"! ur"<<age
  <<"years old."<<endl;
  }

  int main(){
    string personName;
    int personAge;

    wish person1;
    person1.brithdaywishes();
    cout<<" enter the name:";
    cin>>personName;
    cout<<" ENter the Age:";
    cin>>personAge;

    wish person2(personName,personAge);
    person2.birthdaywishes();
  }