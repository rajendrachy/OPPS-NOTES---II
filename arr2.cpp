#include<iostream>
using namespace std;

int main () {

    int arr[3][3] = {2, 10, 3, 
                     12, 8, 7, 
                     8, 9, 1};
    
    cout<<"The array is: " <<*(arr+1)<<endl;
    cout<<"The array is: " <<**(arr+1)+1<<endl;
    cout<<"The array is: " <<**(arr+1)<<endl;

    return 0;
}