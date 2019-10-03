#include<iostream>
#include<string>
using namespace std;
class Student{
  string name;
  int roll_no;
  public:
  Student(){
    name="prabhat";
    roll_no=1001;
  }
  Student(string naam,int n){
    name=naam;
    roll_no=n;
  }
  Student(const Student &s){
    name=s.name;
    roll_no=s.roll_no;
  }
  void output(){
    cout<<"Student's Name: "<<name<<"\nStudent's Roll no : "<<roll_no<<endl;
  }
};
int main(){
    cout<<"\n\ndefault constructor call \n\n";
    Student s;
    s.output();
    cout<<"\n\nparameterized constructor call \n \n";
    Student s1("Harsh",1102);
    s1.output();
    cout<<"\n\nparameterized constructor call \n\n";
    Student s2(s1);
    s2.output();

}
