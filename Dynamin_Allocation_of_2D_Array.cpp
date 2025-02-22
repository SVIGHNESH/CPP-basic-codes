#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of the rows:- ";
    cin >> row;

    int col;
    cout<<"Enter the number of the cols:- ";
    cin >> col;

    int **arr = new int* [row];
    //creation the 2D Array
    for(int i = 0;i<row; i++)
    {
        arr[i] = new int [col];
    }
   

        vim.diagnostic.config({
            -- update_in_insert = true,
            float = {
                focusable = false,
                style = "minimal",
                border = "rounded",
                source = "always",
                header = "",
                prefix = "",
            },
        })
    end
}
    //taking input
    cout << "ENter the elements:- "<<endl;
     for(int i = 0;i<row; i++){
         for(int j = 0;j<col; j++){
            cin >> arr[i][j];
         }
     }

    //printing the array
    cout<<"The elements of the array is :- "<<endl;
        for(int i = 0;i<row; i++){
         for(int j = 0;j<col; j++){
            cout <<  arr[i][j]<<" ";
         }cout << endl;
     }

     
   
    //releaing the 2D Array
    for(int i = 0;i<row; i++)
    {
        delete [] arr[i];
    }
    delete[]arr;
}
