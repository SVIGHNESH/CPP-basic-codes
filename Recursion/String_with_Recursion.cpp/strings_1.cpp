#include<iostream>
#include<string>
using namespace std;

void reverse(int i,int j,string &str){
    //base case 
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    //recursive Call
    reverse(i,j,str);

}
int main(){

    string str;
    cout<<"Enter the string to be reversed "<<endl;
    cin>>str;
    int i=0;
    int j=str.length()-1;
    reverse(i,j,str);
    cout<<str;
}