#include <iostream>
#include <string>
using namespace std;

class Teacher {

private:
    double salary; //data hiding

public:
    //properties//attributes
 string name;
 string dept;
 string subject;
 

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
};



int main() {
    Teacher t1; //Constructor Call
    t1.name = "Mayank";
    t1.subject = "C++";
    t1.dept = "CMPN";
    t1.setSalary(35000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    return 0;

}