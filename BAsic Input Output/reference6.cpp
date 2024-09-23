#include<iostream>
using namespace std;


//*>>>>>>>>>>>>>>>> Reference variables >>>>>>>>>>>>>*/

//Rohan - > Montu -> rohu -> dangerous gamer

int main ()

{
   
   float x = 455;
   float & y = x;
   cout<<x<<endl;
   cout<<y<<endl;



   //Type casting ....................



   int a = 45;
   float b = 45.47;
   cout<<"The value of a is : " <<(float)a <<endl;
   cout<<"The value of the b is : " <<(int)b<<endl;

   int c = int(b);

   cout<<"The exp is: "<<a+b<<endl;
   cout<<"The expression is: " <<a + int(b)<<endl;
    return 0;
}



