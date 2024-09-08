#include<iostream>
using namespace std;
int no_sbit(int n){
    int b,s=0;
    while (n!=0){
        b=n&1;
        
        s+=b;
        
        n>>=1;
    }
    return s;
}

int tno_setb(int a, int b){
    int ans ;
    ans = no_sbit(a)+no_sbit(b);
    return ans;
}
int main (){
      int num1,num2;
    cout << "enter both the number :\n";
    cin>> num1 >> num2;
    
    cout << "total no of set bits of both no are "<< tno_setb(num1,num2)<<endl;
}

 

