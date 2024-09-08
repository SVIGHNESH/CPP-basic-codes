    #include<iostream>
using namespace std;
int main (){

    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        // print karao space (1st triangle )
        int space = n-row;
        while (space)
        {
             cout <<" "<<"  ";
             space --;
        }
        int col = 1;
        while (col<=row)
        {
            cout<<col  <<"  ";
            col++;
        }
        // print 2nd triangle
        int start = row-1;
        while (start)
        {
            cout <<start<<"  ";
            start--;
        }
        cout << endl;
        row ++;


    }
}