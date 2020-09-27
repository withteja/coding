/*
 
 For sequence = [1, 3, 2, 1], the output should be
 almostIncreasingSequence(sequence) = false.
 
 There is no one element in this array that can be removed in order to get a strictly increasing sequence.
 
 For sequence = [1, 3, 2], the output should be
 almostIncreasingSequence(sequence) = true.
 
 You can remove 3 from the array to get the strictly increasing sequence [1, 2]. Alternately, you can remove 2 to get the strictly increasing sequence [1, 3].
 
 // end of the statement
 https://app.codesignal.com/arcade/intro/level-2/2mxbGwLzvkTCKAJMG/
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
 bool almostIncreasingSequence(std::vector<int> v) {
 int c1=0,c2=0;
 for(int i =0;i<v.size()-1;i++){
 if(v[i]>=v[i+1])c1++;
 }
 for(int i =0;i<v.size()-2;i++){
 if(v[i]>=v[i+2])c2++;
 }
 return c1<=1 &&c2<=1;
 }
 
 
