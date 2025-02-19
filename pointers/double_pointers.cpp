#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *p=&i;
    int **p2=&p;
    int ***p3=&p2;
    // cout<<p<<endl; 
    // cout<<p2<<endl;
    // cout<<**p3<<endl;
    // cout<<i<<endl;


    cout<<i<<endl;
    cout << *p << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p2 << endl; //this is all the crazy stuff related to the pointers
    cout << p2 << endl;
    cout << &p2 << endl;
    cout << ***p3 << endl;
    cout << &p3 << endl;
}