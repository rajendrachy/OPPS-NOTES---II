#include <iostream>
using namespace std;
int c = 10;
int main () {

    /*   
    *******************Build in data type************* 
    */
    int a, b, c;
    cout<<"Enter the value of the a:"<<endl;
    cin>>a;
    cout<<"ENter the vlaue of b"<<endl;
    cin>>b;

    c = a+b;
    cout<<"The sum is: " <<c<<endl;

    cout<<"The global c is: "<<::c; //:: -> is the scope resolution operator;



/*   
    *******************float , double and long double literals************* 
    */

    float d = 34.4F;
    long double e = 34.4L;

    cout<<"The size of 34.4 is: " <<sizeof(34.4)<<endl;
    cout<<"The size of 34.4 is: " <<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is: " <<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is: " <<sizeof(34.4L)<<endl;



/*>>>>>>>>>>>>>>>> Reference variables >>>>>>>>>>>>>*/

//Rohan - > Montu -> rohu -> dangerous gamer
    return 0;




}