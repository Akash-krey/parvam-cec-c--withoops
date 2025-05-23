#include<iostream>
using namespace std;

class Car\{
    public:
    string brand, model, varient, fuel_type;
    
    int year;
    float price;

    void start(){
        cout<<"model"<<"started!"<<endl;
    }
    void park(){
        cout<<"model"<<"parked!"<<endl;
    }
    void stop(){
        cout<<"model"<<"stoped!"<<endl;

    }
    void diaplay(){
        cout<<"brand"<<"brand"<<endl;
        cout<<"model"<<"model"<<endl;
        cout<<"variant"<<"variant"<<endl;
        cout<<"fuel_type"<<"fuel_type"<<endl;
        cout<<"Lanch year"<<"lanch year"<<endl;
        cout<<"price"<<"price"<<endl;
    }
    
};
int main(){
    car c1;
    c1.brand="toyata";
    c1.model="innova";
    c1.variant=" 6 seater";
    c1.fuel_type="DEisel";
    c1.year=2024;
    c1.price=15,00,000
    c1.start();
    c1.park();
    c1.stop();
} 