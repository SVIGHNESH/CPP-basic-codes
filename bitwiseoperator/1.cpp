#include<iostream>
using namespace std;
int main (){
        int a = 4;
        int b = 6;
        //bitwise operators
        cout<< "a&b " <<(a&b)<<endl;
        cout<< "a|b " <<(a|b)<<endl;
        cout<< "~a  " <<~a<<endl;
        cout<< "a^b " <<(a^b)<<endl;

        //left shift
        cout<< (17>>1)<<endl;
        cout<<(17>>2)<<endl;

        //right shift
        cout<<(19<<1)<<endl;
        cout<<(21<<2)<<endl;

        //increament and decreement

        int i = 7;
        //post increament 
        cout << (i++)<<endl;
         // o/p = 7; i = 8


        // pre increament
        cout << (++i)<<endl;
        //o/p = 9;i = 9
        
        
        //post decreament 

        cout << (i--)<<endl;
        //o/p = 9; i = 8



        //pre decreament 
        cout << (--i)<<endl;
       // o/p = 7 ; i = 7

        

}