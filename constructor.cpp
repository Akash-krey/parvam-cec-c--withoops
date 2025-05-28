#include<iostream>
using namespace std;

class calculate{
    public:
    int num1,num2;
    float res;


     calculate(){
        num1=5;
        num2=10;

    }
    void showoutput(){
        cout<<"Addition:"<<num1+num2<<endl;
        cout<<"Subtraction::"<<num1-num2<<endl;
        cout<<"Multiplication:"<<num1*num2<<endl;
        cout<<"quoteint:"<<num2/num1<<endl;
        cout<<"remainder:"<<num2%num1<<endl;
        
    }

};
int main(){
    calculate c2;
    c2.num1=25;
    c2.num2=30;
    calculate c1;
    c1.showoutput();
    c2.showoutput();
}