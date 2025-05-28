#include<iostream>
using namespace std;

class Teacher{
    private: //By default all the data members comes under private access specifier
        string branch;
    public:
        string name, qualification;
        int experience;

        Teacher(){ //Default consructor
            branch="AIML";
            name="John Doe";
            qualification="B.E";
            experience=5;
            cout<<"Welcome, John Doe!"<<endl;
        }

        void setData(string Tname, string Tbranch, string Tqual, int exp){
            name=Tname;
            branch=Tbranch;
            qualification=Tqual;
            experience=exp;
        }

        Teacher(string TeacherName, string TeacherBranch, string TeacherQual, int TeacherExp){ //Parameterized Constructor
            setData(TeacherName, TeacherBranch, TeacherQual, TeacherExp);
            cout<<"Welcome,"<<name<<"to"<<branch<<"."<<endl;
            cout<<"You've graduated with,"<<qualification<<"degree.And you've"<<experience
            <<"years of experience"<<endl;
        }

Teacher(teacher &t){
    name=t.name;
    branch=t.branch;
    qualification=t.qualification;
    experience=t.experience;

void getdata(){
    cout<<"Welcome,"<<name<<"to"<<branch<<"."<<endl;
            cout<<"You've graduated with,"<<qualification<<"degree.And you've"<<experience
            <<"years of experience"<<endl;
              }
              `teacher(){
                cout<<" object's work is done,clearing the memory!";
              }
}

int main(){
    string n,q,b;
    int e;

    Teacher teacher1; //Object Created & Invoked the Default Constructor
    
    cout<<"Enter your name, qualification, branch & experience:";
    cin>>n>>q>>b>>e;

    Teacher teacher2(n,b,q,e)
    teacher3.getData
    cout<<"Welcome,"<<name<<"to"<<branch<<"."<<endl;
            cout<<"You've graduated with,"<<qualification<<"degree.And you've"<<experience
            <<"years of experience"<<endl;
};