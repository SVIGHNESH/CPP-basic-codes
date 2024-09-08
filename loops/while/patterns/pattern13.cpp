#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cin >> n;
    int i = 1;
    
    char start = 'A';
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << start << "  ";
            j++;
            start++;

        }
        i++;
        cout <<endl;

    }
}