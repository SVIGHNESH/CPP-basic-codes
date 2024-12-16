#include<iostream>
using namespace std;

class Animal{
     public:
      int age;
      int weight;


      public : 
        void speak(){
            cout << "Speaking" <<endl;

        }
};


class Dog :public Animal{
      
};




class germanShepherd :public Dog{

};

class Cat{
        public :
        void meow(){
            cout << "causing trouble" << endl;
        }
};


//Multiple Inheritance here GermanShepherd and Cat is Inherited inside the Brown

class Brown:public germanShepherd,public Cat{

};
int main(){
     Brown d;

     d.speak();
     d.meow();

     cout << d.age << endl;
     
}