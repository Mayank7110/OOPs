#include <iostream>
#include <string>
using namespace std;


class Student {
   public:
    
   string name;
   double* cgpaPtr;

   Student(string name, double cgpa){
      this->name = name;
      cgpaPtr = new double;
      *cgpaPtr = cgpa;
   }

   Student(Student &obj){
      this->name = obj.name;
      cgpaPtr = new double;
      *cgpaPtr = *obj.cgpaPtr;
   }

    void getinfo(){
    cout << "name: " << name << endl;
    cout << "cgpa: " << *cgpaPtr << endl;

 }
};

int main(){
   Student s1("mayank",8.4);
   Student s2(s1);
   s1.getinfo();

   *(s2.cgpaPtr) = 9.2;
   s1.getinfo();
   s2.name = "Tejas";
   s2.getinfo();
   return 0;
}



// class Teacher {

// private:
//     double salary; //data hiding

// public:

//     string name;
//     string dept;
//     string subject;
    
//     //non-parameterized
//     // Teacher(){
//     //     dept = "CMPN";
//     // }

//     //parameterized 
//     Teacher(string name, string dept, string subject, double salary){
//         this->name =name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }
//    // copy constructor
//    Teacher(Teacher &orgObj){//pass by reference
//       cout << "I am custom copy constructor"<< endl;

//          this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;
//         this->salary = orgObj.salary;
//    }

 

//  //methods/member functions

//  void changeDept(string newDept) {
//     dept = newDept;
//  }

//  //setter
//  void setSalary(double s){
//     salary =s;
//  }

//  //getter
//   double getSalary(){
//     return salary;
//  }

//  void getinfo(){
//     cout << "name: " << name << endl;
//     cout << "subejct: " << subject << endl;

//  }
// };



// int main() {
//     Teacher t1("Mayank" , "CMPN", "CPP", 44000); //Constructor Call

//     Teacher t2(t1); //default copy constructor

//     // t1.name = "Mayank";
//     // t1.subject = "C++";
//     // t1.setSalary(35000);

//     // cout << t1.dept << endl;
//     // cout << t1.getSalary() << endl;

//     t2.getinfo();
//     return 0;

// }