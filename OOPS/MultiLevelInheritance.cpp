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

class Brown:public germanShepherd{

};
int main(){
     Brown d;

     d.speak();

     cout << d.age << endl;
     
}