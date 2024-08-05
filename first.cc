// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Abc{
  int a,b;
  public:
  void setter(int x, int y){
      this->a=x;
      this->b=y;
  }
  void add(int x,int y){
      this->a+=x;
      this->b+=y;
      
  }
  void display() {
    cout<<a<<endl<<b;
  }

  friend Abc sum(Abc, Abc) {

  }
  
  
  Abc sum (Abc T1, Abc T2) {
      
      Abc T3;
      T3.a = T1.a+T2.b;
      T3.b = T1.b + T2.b;
      return T3;
  }
};


int main() {
  Abc ob1;
  ob1.setter(5,30);
  ob1.add(4, 12);
 ob1.display();
  return 0;
}