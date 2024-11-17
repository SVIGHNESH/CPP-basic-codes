#include<iostream>
using namespace std;

int power(int a,int b){
    


    //base case
    if( b == 0)
        return 1;


    if(b == 1)
        return a;

    //Recursive call 
    int ans = power(a,b/2);


    //If b is Even 
    if(b%2 == 0){
            return ans*ans;

    }
    else{
        return a*ans*ans;
    }

}
int main (){
     int a,b;
     cout << "ENter the value of the base"<<endl;
     cin >> a;
     cout << "Enter the value of the power"<< endl;
     cin >> b;
     int ans = power(a,b);
     cout << "The answer is "<< ans << endl;

}