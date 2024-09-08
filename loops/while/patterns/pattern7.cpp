#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout<<count <<"\t";
            count = count + 1;
            col = col + 1; 
        }
        cout << endl;
        row ++;

    }
}