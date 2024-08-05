// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
       public:
    int a;
    A(){
        a=200;
    }
    
    void display(){
        cout << a << endl;
    }
 
};

    void operator--(A &t1){
        t1.a = t1.a - 1;
    }
    
    A operator+(A const&t2, A const&t3){
        A t4;
        t4.a = t2.a + t3.a;
        return t4;
    }
   
int main() {
    A obj1;
    obj1.display();
    
    A obj2;
    obj2.display();
    
    A obj3;
    obj3 = obj2 + obj1;
    
    obj3.display();
    
    return 0;
}