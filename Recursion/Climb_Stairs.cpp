//This Program Give us The ways In Which We Can Reach The Top Of THe Stairs 

#include<iostream>
using namespace std;
int countDistinctWays(int nStairs) {
    //base case
    if(nStairs < 0){
            return 0;
    }
    if(nStairs == 0)
        return 1;

    //Recursive Call 
    int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}
int main (){
    int nStairs;
    cout << "Enter the value of the Stairs" << endl;
    cin >> nStairs;
    cout << countDistinctWays(nStairs);
    
}