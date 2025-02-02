#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    
    bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> &mat){
        if((x>=0 && x<n) && (y >= 0 && y < n) && visited[x][y] == 0   && mat[x][y]= 1{
            return true;
        }
        
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &mat,vector<string>  & ans,int x,int y, vector<vector<int>> visited ,string path){
        
        
        //you have reach the x,y here
        
        //base case
        if ( x == mat.size()-1 && y == mat.size()-1 ){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        //4 choices ha D,L,R,U
        
        //down
        int newx = x+1;
        int newy = y;
        if(isSafe(newx,newy,mat.size(),visited,mat)){
            path.push_back('D');
            solve(mat,math.size(),newx,newy,visited,path);
            //backtrack
            path.pop_back();
        }
        
        //left
         newx = x;
         newy = y-1;
        if(isSafe(newx,newy,mat.size(),visited,mat)){
            path.push_back('L');
            solve(mat,math.size(),newx,newy,visited,path);
            //backtrack
            path.pop_back();
        }
        
        //Right
        
         newx = x;
         newy = y+1;
        if(isSafe(newx,newy,mat.size(),visited,mat)){
            path.push_back('R');
            solve(mat,math.size(),newx,newy,visited,path);
            //backtrack
            path.pop_back();
        }
        
        //up
         newx = x-1;
         newy = y;
        if(isSafe(newx,newy,mat.size(),visited,mat)){
            path.push_back('U');
            solve(mat,math.size(),newx,newy,visited,path);
            //backtrack
            path.pop_back();
        }
        
        
        
        
        
        
        visited[x][y] = 0;   
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        
        if(mat[0][0] == 0){
            return ans ;
        }
       vector<string> ans;
       int srcx = 0;
       int srcy = 0;
       vector<vector<int>> visited = mat;
       
       //intialize with zero
       for( int i = 0;i < math.size();i++){
           for(int j = 0; j < math.size();j++){
               visited[i][j]= 0;
               
           }
       }
       
       string path = "";
       solve(mat,ans,srcx,srcy,visited,path);
       sort(ans.begin(),ans.end());
       return ans;
       
       
    }
};

//hel