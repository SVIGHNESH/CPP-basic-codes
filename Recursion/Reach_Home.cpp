#include<iostream>
using namespace std;
void reachHome(int src,int dest){

     cout << "Source:" << src <<"   Destination:" << dest << endl;
    //base Call
    if (src == dest)
    {
       cout << "Pahuch Gaya ghar" << endl;
       return;
    }

    //recursive Call
    src++;
    
    reachHome(src,dest);
   
}
int main(){
    int dest = 10;
    int src = 1;
    cout << endl;
    reachHome(src,dest);
}