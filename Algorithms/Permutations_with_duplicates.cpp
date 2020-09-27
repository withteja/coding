/*
 permutations if there are duplicates in array 
 [Input]
 v = {1,1,1}
 [Output]
 1 1 1 
 1 1 1 
 1 1 1 
 1 1 1 
 1 1 1 
 1 1 1 
 
 
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

 
void perm(vector<int>v,int l,int r,vector<vector<int>>ans){
 if(l==r){
    ans.push_back(v);
    return;
 }
 for(int i =l;i<v.size();i++){
    swap(v[i],v[l]);
    perm(v,l+1,r,ans);
    swap(v[i],v[l]);
 }
 return;
 }
 

