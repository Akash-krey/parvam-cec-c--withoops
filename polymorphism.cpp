#include<iostream>
using namespace std;
class print{
    private:
    int number;
    float decimal;
    string world;
    
public:
      void setInteger(int num);
      void setfloat(float dec);
      void setstring( string str);
    
};
void print(int num){
    cout<<"printing the integer value:"<<number <<endl;

}
void print(float f){
    cout<<"printing the float value:"<<decimal<<endl;   
}
void print(string s){
    cout<<"printing the string value:"<<word<<endl;

}:

void print::setInteger(int num){
    number=num;
}
void print::setFloat(float dec){
    decimal=dec;
}
void print:: setString(string str){
    word = str;

}

int main(){
    int i;
    float d;
    string w;

    cout<<" Enter the each of the following (1 integer,1 float & 1 string):";
    cin>>i>>d>>w;
    p1.setInteger(i);
    p1.setFloat(d);
    p1.setString(w);

    p1.print(i);
    p1.print(d);
    p1.print(w);
}
