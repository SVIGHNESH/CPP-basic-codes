#include<iostream>
using  namespace std;
void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);//this is the first recursive case 
        cout<<"Move A Disc From "<<A<<"To"<<C<<endl;
        TOH(n-1,B,A,C);//this is the second one 
    }
}
int main (){
    int n=4;
    int A=1;
    int B=2;
    int C=3;
    TOH(n,A,B,C);
}