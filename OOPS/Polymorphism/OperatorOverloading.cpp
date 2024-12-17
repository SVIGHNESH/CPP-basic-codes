#include<iostream>
using namespace std;
class B{
        public:
            int a ;
            int b;
    public:
    int add(){
        return a+b;

    }
    void operator+(B &obj){
            int value1 = this -> a;
            int value2 = obj.a;
            cout << "Output :" << value2 - value1 << endl;

    }

    void operator() (){
        cout << "Mein Bracket Hu  " <<  this -> a << endl;
    }
};
int main(){
        B obj1,obj2;
        obj1.a = 34;
        obj2.a = 34;
        obj1+obj2; //the add operator is overloaded into the subtraction

        obj1();  //here bracket is overloaded to the print comment

}