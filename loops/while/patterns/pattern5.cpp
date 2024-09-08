#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int rows = 1;
    while (rows<=n)
    {
       int coloumn = 1;
       while (coloumn<=rows)
       {
            cout<<"*"<<"\t";
            coloumn = coloumn + 1;

              }
         cout<<endl;
         rows = rows + 1;
       

    }
    
}