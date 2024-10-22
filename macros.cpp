#include<iostream>
using namespace std;
// C program to illustrate macros


// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

// Driver Code
int main()
{

    // Given two number a and b
    int a = 18;
    int b = 76;
    cout<<"Mininum value between "<<a<<" and "<<b<<" is "<<min(a,b)<<endl;
   

    return 0;
}
