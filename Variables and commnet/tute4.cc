#include<iostream>
using namespace std;
int glo = 6;
void sum () {
    int a;
    cout<<"\nThe global variable is :" <<glo;
}
int main () {
    
    int glo = 9;
    int a = 4;
    int b= 5;
    float pi = 3.14;
    bool is_true = true;
    cout << "This is the tute 4. \n Here is the value of : "<<a<<". The value odf b is : " << b;
    cout <<"The value of pi \n is: " <<pi;

    sum();
    cout<<"the global: " <<glo<<is_true;
    return 0;
}

//\n -> for next line
//Local variable has more presidence then the global variable 