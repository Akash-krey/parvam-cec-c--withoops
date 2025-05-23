#include<iostream>
using namespace std;

class student{
    public:
      string name,collage,branch;
      int sem;

      void show(){
        cout<<" Name:"<<name<<endl;
        cout<<" collage:"<<collage<<endl;
        cout<<" Branch:"<<branch<<endl;
        cout<<" sem:"<<sem<<endl;

      }
};
int main(){
    student student1;//obeject creation 
    student1.name=" Akash";
    student1.collage="cec";
    student1.sem=2;
    student1.branch="AiML";
    student student2;//obeject creation 
    student2.name=" manoj";
    student2.collage="csc";
    student2.sem=2;
    student2.branch="cse";

     student1.show();
     student2.show();

}


