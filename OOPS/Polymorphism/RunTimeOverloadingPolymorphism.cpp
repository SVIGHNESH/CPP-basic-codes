#include<iostream>
using namespace std;

class Animal{
    public:
        void speak(){
            cout << "Speaking " << endl;

        }
};

class Dog : public Animal{
    public:
    void speak(){
        cout << "Woof Woof " << endl;
    }
};

class Cat : public Animal{
    public:
    void speak(){
        cout << "Meow Meow " << endl;
    }  
    };
int main (){
     Dog obj;
     obj.speak(); 
}