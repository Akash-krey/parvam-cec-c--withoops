#include<iostream>
using namespace std;

class company{
    private:
        string cin;
        int totalworth=0;

        public:
          string gstNum,location;
          int numofEmp;
        //setter method
          void setDetails(string cinNum,intworth){
            cin=cinNum;
            tatalworth=worth;
          }
          //getter method
          void get detaails(string gstNumber){
            cout<<"corporate identity Number:"<<cin<<end1;
            cout<<"Total worth of company:"<<totalworth<<end1;
          }
          void addBasicDetails();//Declare the member function

};

//Function Defination outside the class
//syntax: return_type class_name::member_function
void addBasicDetails(){//scope Resolution operator
    cout<<"GST Number:"<<gstNum<<end1;
    cout<<"location:"<<location<<end1;
    cout<<"Number of Employees:"<<numofEmp<<end1;

}
int main(){
    companycomp1;//object created
    comp1.gstNum="1234566";
    comp1.location="Bengaluru";
    comp1.numofEmp="50";
    comp1.getBasicDeatils();

    string cinNumber;
    int companyworth;

    c inNumber="123456788"
    companyworth=50000

    comp1.setDetails(cinNumber,companyworth);
    comp1.getDetails(comp1.gstNum
    );

}