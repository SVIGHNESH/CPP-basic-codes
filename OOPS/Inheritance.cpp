#include<iostream>
using namespace std;

class Human{

        public :
            int height;
            int weight;
            int age;
        
        public:
            int getAge(){
                return this -> age;

            }

            void  setWeight(int w){
                this -> weight = w;
                
            }
};


class Male: public Human{
        public:
            string color;

        string sleep(){
            return "Men is Sleeping";
        }
};


int main (){
        Male obj1;

        cout << obj1.age << endl;

        obj1.setWeight(23);
        cout << obj1.weight << endl;
        cout << obj1.height << endl;
        cout << obj1.color << endl;
        cout << obj1.sleep() << endl;
}