#include <iostream>
#include <string>
using namespace std;



//----------------------------------Abstraction---------------------------------//

class Shape{ // Abstract class
   virtual void draw() =0; // pure virtual function
};

class Circle : public Shape{
public:
   void draw(){
      cout << "Drawing Circle" << endl;
   }
};

int main(){
   Circle c1;
   c1.draw();
   return 0;
}



//-----------------------------------Polymorphism-------------------------------//

//Function overridding

// class Parent{
//    public:
//    void getInfo(){
//       cout << "Parentclass;" << endl;
//    }
// };

// class Child : public Parent{
//    public:
//       void getInfo(){
//       cout << "Child class" << endl;
//    }
// };

// int main(){

//    Child p1;
//    p1.getInfo();
// }

//Compile time polymorphism:  constructor and function overloading same name diff parameters
// class print{
//    public:
//    void show(int x ){
//       cout << "int : "<< x << endl;
//    }
   
//    void show(char x ){
//       cout << "char : "<< x << endl;
//    }
// };


// int main(){
//    print p1;

//    p1.show('&');
//    return 0;
// }




//--------------------------------------Inheritance----------------------------//
// class Person{
// public:
//    string name;
//    int age;

//    //    Person(string name, int age){
//    //    this->name = name;
//    //    this->age = age;
//    // }

//    Person(){
//       cout << "Parent Constructor...\n";
//    }

// };

// class Student : public Person{
//    public:
//    int rollno;

//    Student(){
//       cout << "Child Constructor...\n";
//    }

//    void getinfo(){
//     cout << "name: " << name << endl;
//     cout << "rollno.: " << rollno << endl;
//     cout << "age: " << age << endl;

//  }
// };

// int main(){
//    Student s1;
//    s1.name ="Mayank";
//    s1.age =20;
//    s1.rollno = 65;
//    s1.getinfo();
//    return 0;
// }



// class Student {
//    public:
    
//    string name;
//    double* cgpaPtr;

//    Student(string name, double cgpa){
//       this->name = name;
//       cgpaPtr = new double;
//       *cgpaPtr = cgpa;
//    }



//    //desctructor
//    ~Student(){
//       cout << "I delete Everything HEHE i am Destructor \n";
//       delete cgpaPtr;
//    }


//     void getinfo(){
//     cout << "name: " << name << endl;
//     cout << "cgpa: " << *cgpaPtr << endl;

//  }
// };

// int main(){
//    Student s1("mayank",8.4);
   
//    s1.getinfo();
   
//    return 0;
// }



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