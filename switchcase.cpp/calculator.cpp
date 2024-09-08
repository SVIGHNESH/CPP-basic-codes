#include<iostream>
using namespace std;
int main (){
        int a,b,c;
        char op;
        cout<<"Enter the first value:"<<endl;
        cin >> a;
        cout <<"Enter the second value: "<<endl;
        cin>>b;
        cout<<"Enter the operation(+,-,*,/,%) you want to perform:"<<endl;
        cin>>op;
        switch(op){
            case '+': 
                        c=a+b;
                        cout<<"The sum of the given numbers is:"<<c<<endl;
                        break;
            case '-':
                        c=a-b;
                        cout<<"The subtraction ofthe given numbers4 is:"<<c<<endl;
                        break;
            
            case '*':
                        c=a*b;
                       cout <<"THE multiply of the given numbers is :"<<c<<endl;
                       break;
                    
            case '/': 
                        c=a/b;
                        cout <<"The division of the given numbers is :"<<c<<endl;
                        break;
            case '%':
                        c=a%b;
                        cout<<"The modulus of the given number is "<<c<<endl;
                        break;

            default:
                        cout <<"Please enter the valid operation."<<endl;
                        break;

        }



}