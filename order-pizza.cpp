#include<iostream>
using namespace std;

class pizza{
    private:
     string secreateIngredient;
    public:
    string pizzaType,size;
    int prize;
    bool ispaymentDone;
     
    void order  pizza(){
        cout<<"order the pizzza by selecting ur favourite pizza !"<<endl;
     }
     void bookpizza(){
        cout<<"boking the pizza!"<<endl;
     }
    void bakePizza(string type,string pizza size){
        pizzaType=type;
        size=pizzasize;
        cout<<"pizza Type: "<< pizzaType<<",size"<<size<<endl;
    }
    void addingredient(string secret){
        secretIngredient=secret;
    }
    void confrimorder(){
        cout<<"order confirmed!"<<endl;

    }
    void check payment(int money,bool payment){
        price=money;
        ispaymentDone=payment;
        if(ispayment==true){ 
          cout<<"Amount paid : "<< money<<"payment succesfull!"<<endl;
          confirmOrder();
          bookpizza();return true;
        }else{
            cout<<"Amount Due:rs"<<price<<"payment pending!"<<endl;
            return false;
        }
    }
    void servepizza(string type of pizza,string secretiteam){
        if(!check payment(amount,paid)){
            cout<<"order cancelled due to the payment pending!"<<endl;
            return;
        }
        
        bakepizza(type of pizza);
        addIngredient(secretItem);
        cout<<"pizza served! Enjoy your pizza";

    }
};
int main(){
    string pizzatype,size,secreating;
    int pizzaAmount;
     bool amountpaid;

     pizza customer1;
     customer1.orderpizza();
     cout<<"Enter the pizza type (veg/non-veg),size(regular/medium/large): ";
     cin>>piztype>>size;
     pizzaAmount=399;
     cout<<"did the pay the amount(type'1' if paid/type'0' if not paid):";
     cin>>amountPaid;

     customer1.serverpizza(pizzaAmount,amountpaid,pizzaType,size,secreating);
};
