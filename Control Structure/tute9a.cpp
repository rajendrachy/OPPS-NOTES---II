#include<iostream>
using namespace std;
int main () {
     int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch(age) {
        case 1: 
        cout<<"Your are 18";
        break;
        case 2:
        cout<<"Your are 18 +";
        default:
        break;
    }
   
    return 0;
}