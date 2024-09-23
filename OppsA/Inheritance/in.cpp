#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    int age;

    // Person (string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }

    Person() {

    }
};

class Student : public Person {
    //name, age, rollno
    public:
    int rollno;

    void getInfo() {
       cout<<"name :"  <<name << endl;
       cout<<"age: " << age<< endl;
       cout<<"rollno" << rollno << endl;

    }

};

int main () {
Student s1;
s1.name = "rajendra chaudhary";
s1.age = 19;
s1.rollno = 1234;

s1.getInfo();
    return 0;
}