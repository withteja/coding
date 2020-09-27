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

void add(int u,int v,vector<vector<int>> &g){
    g[u].push_back(v);
    return;
}


// DFS
void dfs(int u,vector<vector<int>> g, vector<bool> &vis){
    for(int i = 0;i<g[u].size();i++ ){
        vis[g[u][i]]=true;
            //        Access the elements here.
        cout<<g[u][i]<<endl;
        dfs(g[u][i],g,vis);
    }
    return;
    
}



int main (){
    
    int N = 6;
   vector<vector<int>> g(N);
    for(int i =1;i<N;i++){
        add(i-1, i, g);
    }
    vector<bool> vis(N,false);
    for(int i =0;i<N;i++){
        if(!vis[i])
            dfs(i,g,vis);
    }
    
}
