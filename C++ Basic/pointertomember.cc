#include <iostream>

class Person {
public:
    int age;
    void setAge(int a) { age = a; }
    int getAge() { return age; }
};

int main() {
    int Person::*ptrToAge = &Person::age;
    Person person;
    person.setAge(25);
    Person* p = &person;
    int age = (p->*ptrToAge);
    std::cout << "Age: " << age << std::endl;
    return 0;
}