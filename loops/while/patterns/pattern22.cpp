#include<iostream>
using namespace std;
int main (){

    int n;
    cin >> n;
    int i = 1;
    while (i<=n){

        //first triangle
        int j = 1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        int star1 =i-1;
        while(star1)
        {
            cout<<"*";
            star1--;

        }
        int star2 = i-1;
        while (star2)
        {
           cout<<"*";
            star2--;

        }
        int start = j-1;
        while (start)
        {
            cout<<start;
            start--;

        }
        
          cout<<endl;
          i++;
    }



}