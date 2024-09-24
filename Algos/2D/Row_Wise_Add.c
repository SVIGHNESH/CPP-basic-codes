#include<iostream>
using namespace std;
//to print the row wise sum
void printSum(int a[][3], int row, int col) {
    cout << "Printing the sum -->" << endl;
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += a[i][j];
        }
     }
     cout<<endl;
    cout<<sum<<" ";   
}
int main(){
    int a[3][3];
    cout<<"Enter the elements:"<<endl;
    for(int row = 0;row<3;row++){
        for(int col =0; col<3;col++){
            cin>>a[row][col];
        }
    }

    cout<<"Printing the array:"<<endl;
    for(int row = 0 ;row<3;row++){
        for(int col = 0;col<3;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    printSum(a,3,3);
 
}
