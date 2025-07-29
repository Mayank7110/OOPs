#include <iostream>
#include <string>
using namespace std;

class Teacher {
    //properties//attributes
 string name;
 string dept;
 string subject;
 double salary;

 //methods/member functions

 void changeDept(string newDept) {
    dept = newDept;
 }
};

int main() {
    Teacher t1;
    t1.name = "Mayank";
    t1.subject = "C++";
    t1.dept = "CMPN";
    t1.salary = 25000;

    cout << t1.name << endl;
    return 0;

}