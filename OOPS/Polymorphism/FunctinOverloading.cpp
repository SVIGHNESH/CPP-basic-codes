#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){

        cout << "Hello From the Vighnesh Shukla " <<endl;
    }
     void sayHello(string name ){

        cout << "Hello From the  " << name << endl;
    }
};

int main () {
        A obj;
        obj.sayHello();

}