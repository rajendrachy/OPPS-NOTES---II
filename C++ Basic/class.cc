// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class timespan{
  int hr,min;
  public:
  void setter(int hr, int min){
      this->hr=hr;
      this->min=min;
  }
  int gethrs(){
      return hr;
  }
  int getmin(){
      return min;
  }
  void add(int hr,int min){
      this->hr+=hr;
      this->min+=min;
      if(this->min>=60){
          int extra=this->min/60;
          this->hr+=extra;
          this->min-=(extra*60);
      }
  }
  void add( timespan ob2){
      hr+=ob2.hr;
      min+=ob2.min;
      if(min>=60){
          int extra=min/60;
          hr+=extra;
          min-=(extra*60);
      }
  }
  
  
};
int main() {
  timespan ob1;
  ob1.setter(5,30);
  cout<<ob1.gethrs()<<" "<<endl;
  cout<<ob1.getmin()<<" "<<endl;
  ob1.add(5,30);
  timespan ob2;
  ob2.setter(4,40);
  ob1.add(ob2);
  cout<<"total hour is: "<<ob1.gethrs()<<":"<<ob1.getmin()<<endl;
  return 0;
}