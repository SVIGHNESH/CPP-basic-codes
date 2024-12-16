#include<iostream>
using namespace std;


class A{
        public :
        void Func(){

            cout << "A wala Func() ha." << endl;

        }

};

class B{
    public:
    void Func(){

        cout << "B wala Func() ha " << endl;
    }
};

class C : public B,public A{

};
int main(){
            C obj;


            // here we are using the scope resolution operator 
            //Func()  of the class will be called.
            obj.A::Func();

            obj.B::Func();




}