#include<iostream>
using namespace std;

class Area{
    private:
     int: length,breadth,height;
     float radius;
    public:
     int result;

     Area(){
        length=0;
        breadth=0;
        radius=0;

     }
  Area(int a ){
    length=a;
    result=length*length;
    cout<<" area of square"<<result<<endl;

  }
  Area(int c,int d){
    length=c;
    readth=d;
    result=length*breadth;
    cout<<" area rectangle"<<result<<endl;


  }
  Area(float r){
    radius =r;
    result=2*3142*radius;
    cout<<" area of circle"<<result<<endl;

  }
  Area(int 1,int b,int h){
  lenght=l;
  breadth=b;
  height=h;
 result= lenght*breadth*height;
 cout<<" area of cube"<<result<<endl;
}
};