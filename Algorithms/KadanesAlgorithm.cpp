
// Maximum subarray algorithm
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


int kadanes_algorithm(vector<int>v){
    int ans= INT_MIN;
    int temp =0;
    for(int i =0;i<v.size();i++){
        temp+=v[i];
        if(temp>ans)ans=temp;
        if(temp<0)temp =0;
    }    
    return ans;
}

