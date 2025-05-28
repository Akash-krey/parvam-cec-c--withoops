#include<iostream>
using namespace std;
class Parent{
    private:
      net-worth;
    public:
       string family_name,family_head;
       int number_of_remembers;

       void setData(int worth,string familyName,string familyHead,int member_count){
        net_worth=worth;
        family_name=familyName;
        family_head=familyHead;
        number_of_members=member_count;
         }
         int showNetworth(){
            cout<<net_worth;
         }


};
class Child : public Parent{
    public:
    string member_name;
    int age;

    void addDetails(string name,int person_age){
        member_name=name;
        age=person_age;
    }

    void getfamily(){
        cout<<"my name is"<<member_name<<"and I'am"<<age<<"years old.And I'am from "<<family_name
        <<"and my family head is "<< family head<<",our family Net-worth is about  "<<

    }

};
int main(){
    string fName,fHead,fMembers,cName;
    int childAge,fWorth;

    cout<<"Enter the family name,family Head,number of members in the family & Net worhth :";
    cin>>fName>>fHead>>fMemers>>fWorth;

    Parent p1;
    p1.setData(fWorth,fName,fHead,fMembers);

    cout<<"Enter your name & age:";
    cin>>cName>>childAge;

    Child c1;
    c1.addDetails(cName,childAge);
    
    c1.getFamilyDetails();
}