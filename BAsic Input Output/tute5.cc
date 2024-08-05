#include<iostream>
using namespace std;
int main () {
    int num1, num2;
    cout<<"Enter the value o fhte num 1: \n"; 
    /* << -> This is called insertion operator*/
    cin>>num1; 
    /* >> -> is called extration operator*/

    cout<<"Enter the value of num2:\n";
    cin>>num2;

   int result = num1 + num2;
    cout<<"The sum is : " <<result;
    return 0;
}