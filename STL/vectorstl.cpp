#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
        cout<<"Capacity  --> "<<v.capacity ()<<endl;

         v.push_back(2);
        cout<<"Capacity  --> "<<v.capacity ()<<endl;

         v.push_back(3);
        cout<<"Capacity  --> "<<v.capacity ()<<endl;

         v.push_back(16);
        cout<<"Capacity  --> "<<v.capacity ()<<endl;

        cout<<"total elements in the vector"<<v.size()<<endl;

        cout<<"Elements in the index 0 -->"<<v.at(0)<<endl;
        cout<<"Elements in the index 1 -->"<<v.at(1)<<endl;
        cout<<"Elements in the index 2 -->"<<v.at(2)<<endl;
        cout<<"Elements in the index 3 -->"<<v.at(3)<<endl;
        cout<<"The first element is --> "<<v.front()<<endl;
        cout<<"The last element is --> "<<v.back()<<endl;

        //pop the last element
        cout<<"before pop"<<endl;
        for(int i:v){
            cout<<i<<" ";
        }cout<<endl;
        v.pop_back();
        cout<<"after the pop"<<endl;
        for(int i:v){
            cout<<i<<" ";
        }cout<<endl;


        //clearing all the elements in the vector
        cout<<"before the size of the vector --> "<<v.size()<<endl;
        v.clear();
        cout<<"after clearing the size of the vector --> "<<v.size()<<endl;


        //another variant of intialize the vector

        vector<int>a(5,1);
        cout<<"printing the 'a' vector"<<endl;
        for(int i:a){
            cout<<i<<" ";
        }cout<<endl;

        //copying the value of the a in the vector named(last)

        vector<int>last(a);
        cout<<"The elements of the vector named 'last'"<<endl;
        for(int i:last){
            cout<<i<<" ";
        }cout<<endl;
}
