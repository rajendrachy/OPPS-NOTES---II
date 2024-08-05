#include<iostream>
using namespace std;

class Abc {
    int a, b;
    public:
    void set(int x, int y) {
        a=x; 
        b=y;
    }
    void add(int x, int y) {
        a+=x;
        b+=y;
    }

    void display() {
        cout<<a<<endl<<b;
    }
};

int main () {
  Abc ob1;
  ob1.set(5, 8);
  ob1.add(5, 8);
  ob1.display();
  
    return 0;
}