#include<iostream>
using namespace std;
int main () {
    int age;
    cout<<"Tell me your age" <<endl;
    cin>>age;
    if(age<18) {
        cout<<"you can not come to the party"<<endl;

    }

    else if(age == 18) {
        cout<<"You can come to the party and play with your friend" <<endl;
    }  else  {
        cout<<"you can come to the party"<<endl;
    }
    return 0;
}