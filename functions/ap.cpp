#include<iostream>
using namespace std;
int nth_term(int n){
    return (3*n + 7);
}
int main(){
    int n; 
    cout<<"Enter n : ";//we are getting the value of n from the user 
    cin >> n;
    cout<<"The nth term of the AP is : "<<nth_term(n)<<endl;
    return 0;
}