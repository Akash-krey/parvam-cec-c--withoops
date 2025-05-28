#include<iostream>
 using namespace std;

 class Bank{
    private:
      int balance;
    public:
     string custname,custemail;
     int accnumber;

     void createaccount;(string cname,string cemail){
        custname = cname;
        custemail = cemail;
     }

     void displayInfo(){
        cout<<"customer Name:"<<custname<<endl;
        cout<<"customer Email:"<<custemail<<endl;
     }`//

     void addbalance(int amount){
        balance +=amount;
     }
     void withdrawAmount(int account,int amount){
      if(Amount<=balance){
         balance-=amount;
         cout<<" the aamount has been withdarwn sucessfully!"<<endl;
      }
      else{
         cout<<" in suffient balance cannot withdrawn"<<endl;
      }
     }
     void check balance(){
        cout<<"Bank balance"<<balance<<endl;
     }



 };
 int main(){
    Bank cust1; //object Declared
    string name,email;
    int acNum,amount;
    //we can assign the value to the public member
    cust1.custName="Akash";
    cust1.custemail="pojaliannaakash@.com"
    cust1.acNumber=12345;
    //cust1.balance=8000;//we can't assign the value thn the private number


    cout<<"Enter the name:";

    cin>>name;
    cout<<"Enter the Email:";
    cin>>email;

    cust1.createaccount(name,email);
    cust1.displayInfo();
    cust1.addbalance(acNum,amount);
    cust1.checkBalance();
 }