#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Hello");
    q.push("My ");
    q.push("Name");
    q.push("Is");
    q.push("Vighnesh");
    cout<<"The first element that will be executed is --> "<<q.front()<<endl;
    // q.pop();
    // cout<<"After the first poping,Now the first element is --> "<<q.front()<<endl;
    //  q.pop();
    // cout<<"After the second poping,Now the second element is --> "<<q.front()<<endl;
    //      q.pop();
    // cout<<"After the third poping,Now the third element is --> "<<q.front()<<endl;
    //      q.pop();
    // cout<<"After the fourth poping,Now the first element is --> "<<q.front()<<endl;
    cout<<"The size of the queue is --> "<<q.size()<<endl;
    q.pop();
    cout<<"Now,The size of the queue is --> "<<q.size()<<endl;
}