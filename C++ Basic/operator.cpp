#include <iostream>

using namespace std;

class A {
    private:
        int a; 
        int b;
        int c;
    
    public:
        void set(int x, int y, int z) {
            a = x;
            b = y;
            c = z;
        }
        
        void display() {
            cout << a << " " << b << " " << c << endl;
        }
        
        A operator +(const A& ob) const {
            A t;
            t.a = a + ob.a;
            t.b = b + ob.b;
            t.c = c + ob.c;
            return t;
        }
};

int main() {
    A ob1;
    ob1.set(5, 10, 15);
    ob1.display();
    
    A ob2;
    ob2.set(20, 30, 35);
    ob2.display();
    
    A ob3;
    ob3.set(30, 40, 45);
    ob3.display();
    
    A ob4 = ob1 + ob2 + ob3;
    ob4.display();
    
    
    return 0;
}