#include<stdio.h>
void TOH(int n , int a , int b ,int c ){
    if(n>0){
        TOH(n-1,a,c,b);
        printf("Move a disc from the %d to %d \n",a,c); 
        TOH(n-1,c,a,b);

    }
}
int main(){
    TOH(3,1,2,3);
}