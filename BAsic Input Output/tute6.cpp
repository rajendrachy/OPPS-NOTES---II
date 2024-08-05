#include<iostream>
using namespace std;

//There are two types of the header files:
//1. syatem header file: It comes with the compiler.
//2. User defined header files: It is written by the programmer.
int main () {
    int a =4, b = 5;
   cout<<"operators in the c++: " <<endl; //used to jump inthe new line
   cout<<"Following are the types of the operators in c++:" <<endl;




   //Arithmetic operator

   cout <<"The value of a + b is: " <<a+b<<endl;
   cout <<"The value of a - b is: " <<a-b;
   cout <<"The value of a * b is: " <<a*b;
   cout <<"The value of a / b is: " <<a/b;
   cout <<"The value of a % b is: " <<a%b;
   cout <<"The value of a++ is: " <<a++;
   cout <<"The value of a + b is: " <<++a;
   cout <<"The value of a + b is: " <<--a;
   cout <<"The value of a + b is: " <<a--;




   // Assignment Operators
   // 1.int a = 3, b=5;
   // 2.char d = 'd';



   //Comparision OPerator

   cout<<"The value of a==b is: " <<(a==b)<<endl;
 cout<<"The value of a!=b is: " <<(a!=b)<<endl;
  cout<<"The value of a==b is: " <<(a<b)<<endl;
   cout<<"The value of a==b is: " <<(a>b)<<endl;
   



//Logical OPerator 

cout<<"The value of logivcal and operator is: " <<((a==b) && (a<b))<<endl;
cout<<"The value of logical or operator is: " <<((a<b) || (a<b))<<endl;
cout<<"The value of logical not is: " <<!(a==b)<<endl;
cout<<"The value of a==b is: " <<(a>b)<<endl;
   
    return 0;
}