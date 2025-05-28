#include<iostream>
using namespace std;
class Interest{
    private:
    int principal,term,rate,totalInterst;
    float rateInpercent;

    public:
    int simpleInterst=0;
    Interest(){
        principal=0;
        term=0;
        rate=0;
        totalInterst=0;
        rateInpercent=0;
        cout<<"Total Interst Earned:"<<totalInterst<<endl;
    }
    Interest(int p,int t,int r){
        setValues(p,t);
        setRateValuesfloat(r);
        simpleInterst=(principal*term*rate)/100;
        cout<<"simple Interst for the following details:"<<endl;
        cout<<"principal Amount:"<<principal<<endl;
        cout<<"No.of year(term):"<<term<<endl;
        cout<<"Rate of Interst(in Integer):"<<rate<<endl;
        totalInterst=principal+simpleInterst;
        cout<<"Total Interst Earned:"<<totalInterst<<endl;
    }

        Interest(int p,int t,float rateInDecimal){
        setValues(p,t);
        setRateValuesfloat(rateInDecimal);
        simpleInterst=(principal*term*rate)/100;
        cout<<"simple Interst for the following details:"<<endl;
        cout<<"principal Amount:"<<principal<<endl;
        cout<<"No.of year(term):"<<term<<endl;
        cout<<"Rate of Interst(in Integer):"<<rate<<endl;
        totalInterst=principal+simpleInterst;
        cout<<"Total Interst Earned:"<<totalInterst<<endl;
        }
        void setValues(int a,int y){
            principal=a;
            term=y;
        }
        void setRateValuesInteger(int rateInInteger){
            rate=rateInInteger;
        }
        void setRateValuesfloat(int rateInfloat){
            rate=rateInfloat;
        }
};
int main(){
    int amount,year,rateofInterst;
    float InterstRate;


    Interest int1;

    cout<<"enter the principal Amount,No of years & Rate of Interest(eg.5):";
    cin>>amount>>year>>rateofInterst;


    Interest int2(amount,year,rateofInterst);

    cout<<"enter the principal Amount,No of years & Rate of Interest(eg.0.05):";
    cin>>amount>>year>>rateofInterst;


    Interest int3(amount,year,rateofInterst);
}
