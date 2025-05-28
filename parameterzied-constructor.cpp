#include<iostream>
using namespace std;

 class Area{
    private:
     int length,breadth;

    public:
    int l,b,result;
      Area(){
        length=0;
        breadth=0;

      }
      Area(int a,int b){
        length=a;
        breadth=b;

      }
      void calculateArea(){
        result=length*breadth;
        cout<<" area of rectangle with length :"<<length<<" and breadth:"<<breadth
        <<" is equal to "<< result<<endl;

      }
 };

 int main(){
    int len,wid;
    Area rect1;
    rect1.calculate();

    cout<<" enter the length and breadth for finding the area of rectangle:";
    cin>>len>>wid;

    Area rect1(len,wid);
    rect2.calculateArea();
    
}