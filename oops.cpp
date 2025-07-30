#include <iostream>
#include <string>
using namespace std;

class Teacher {

private:
    double salary; //data hiding

public:

    string name;
    string dept;
    string subject;
    
    //non-parameterized
    // Teacher(){
    //     dept = "CMPN";
    // }

    //parameterized 
    Teacher(string n, string d, string s, double sal){
        name =n;
        dept = d;
        subject = s;
        salary = sal;
    }
    //properties//attributes

 

 //methods/member functions

 void changeDept(string newDept) {
    dept = newDept;
 }

 //setter
 void setSalary(double s){
    salary =s;
 }

 //getter
  double getSalary(){
    return salary;
 }

 void getinfo(){
    cout << "name: " << name << endl;
    cout << "subejct: " << subject << endl;

 }
};



int main() {
    Teacher t1("Mayank" , "CMPN", "CPP", 44000); //Constructor Call
    // t1.name = "Mayank";
    // t1.subject = "C++";
    // t1.setSalary(35000);

    // cout << t1.dept << endl;
    // cout << t1.getSalary() << endl;

    t1.getinfo();
    return 0;

}