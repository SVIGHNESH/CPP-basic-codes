#include<iostream>
using namespace std;
void printcounting(int n){

    int count = 1;

    for (int  i = 1; i <=n; i++)
    {
        cout <<i <<",";
    }
    return;
}
int main (){
                int n;
                cin >>n;
                printcounting(n);

}