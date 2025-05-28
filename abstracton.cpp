#include<iostream>
 using namespace std;
 class Bike{
    public:
      string  brand,model,engine_type;
      int year,price;

    void injectionFuel(){
        cout<<"injecte the  Fuel "<<endl;
    }

    void igniteFuel(){
        cout<<"Ignite the Fuel"<<endl;
    }
    void start(string model){
        injectionFuel();
        igniteFuel();
        cout<< model<<"started happy journey!"<<endl;
    }
    void stopAcceleration(){
        cout<<"Acceleration stopped!"<<endl;
    }
    void stopFuelFlow(){
        cout<<"stoping the fuel"<<endl;
    }
    void stop(){
        stopAcceleration();//Abstraction
        stopFuelFlow();//Abstraction
        cout<<model<<"stoped,lock the vehical!";
    }
};
 int main(){
    Bike bike1;
    bike1.brand="bajaj";
    bike1.model="pulsar ns125";
    bike1.engine_type="BS6";
    bike1.year=2022;                   
    bike1.price=150000;                      
    bike1.start(bike1.model);
    bike1.stop();                      
 }