#include<iostream>
using namespace std;
int main () {

    int arr[5] = {2, 4, 5, 8, 9};
    int *a = arr;
    cout<<"The array is: " <<arr[0]<<endl;
    cout<<arr[2]<<endl;



   cout<<(arr[0] + 1)<<endl;

   cout<<"The array is: "<<*(a+1)<<endl;

   cout<<"The access array is : " <<*(a)+1<<endl;

   cout<<"The element is: " <<*(a+2) << endl;
    return 0;
}