#include<iostream>
using namespace std;


// heirarichal inheritance 

class A{
        public :
        void Func1(){
            cout<<"Inside The Function 1"<<endl;

        }
};

class B:public A{
         public :
        void Func2(){
            cout<<"Inside The Function 2"<<endl;

        }

};



class C:public A{
         public :
        void Func3(){
            cout<<"Inside The Function 3"<<endl;

        }
};
int main (){
    A object1;
    object1.Func1();
     

     B object2;
     object2.Func1();
     object2.Func2();

     C object3;
     object3.Func1();
     object3.Func3();
   

   return 0;
}
