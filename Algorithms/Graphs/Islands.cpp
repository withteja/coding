/*
 Given a 2d grid map of '1's (land) and '0's (water), count the number of islands.
 An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
 You may assume all four edges of the grid are all surrounded by water.
 
 
 
 Example 1:
 
 Input: grid = [
 ["1","1","1","1","0"],
 ["1","1","0","1","0"],
 ["1","1","0","0","0"],
 ["0","0","0","0","0"]
 ]
 Output: 1
 Example 2:
 
 Input: grid = [
 ["1","1","0","0","0"],
 ["1","1","0","0","0"],
 ["0","0","1","0","0"],
 ["0","0","0","1","1"]
 ]
 Output: 3

*/
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
#include<cassert>
#include<unordered_set>
#include<cmath>
#include<climits>
#include<iomanip>
#include<stack>
#include<unordered_map>
#include<bitset>
#include<limits>
#include<complex>
#include<array>
#include<numeric>
#include<functional>

using namespace std;

// Sol 1
// DFS
void dfs(vector<vector<char>> &grid,int r,int c){
    int nr = grid.size();
    int nc = grid[0].size();
    
    grid[r][c]='0';
    if(r-1>=0 && grid[r-1][c]=='1')dfs(grid,r-1,c);
    if(r+1<nr && grid[r+1][c]=='1')dfs(grid,r+1,c);
    if(c-1>=0 && grid[r][c-1]=='1')dfs(grid,r,c-1);
    if(c+1<nc && grid[r][c+1]=='1')dfs(grid,r,c+1);
}
int numIslands(vector<vector<char>>& grid) {
    int islands =0;
    for(int i =0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]=='1'){
                dfs(grid,i,j);
                islands++;
            }
        }
    }
    return islands;
}

//Sol 2
// BFS
int numIslands1(vector<vector<char>>& v) {
    
    int island =0;
    for(int r=0;r<v.size();r++){
        for(int c =0;c<v[0].size();c++){
            
            if(v[r][c]=='1'){
                island++;
                queue<pair<int,int>> q;
                v[r][c]='0';
                q.push({r,c});
                
                while(!q.empty()){
                    auto x = q.front();
                    q.pop();
                    int i = x.first;
                    int j = x.second;
                    if(i-1>=0 && v[i-1][j]=='1'){
                        v[i-1][j]='0';
                        q.push({i-1,j});
                    }
                    if(i+1<v.size() && v[i+1][j]=='1' ){
                        v[i+1][j]='0';
                        q.push({i+1,j});
                    }
                    if(j+1<v[0].size() && v[i][j+1] == '1'){
                        v[i][j+1] = '0';
                        q.push({i,j+1});
                    }
                    if(j-1>=0 && v[i][j-1]=='1'){
                        v[i][j-1]='0';
                        q.push({i,j-1});
                    }
                }
            }
        }
    }
    return island;
}
