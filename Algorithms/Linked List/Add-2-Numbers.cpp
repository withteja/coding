/*
 You are given two non-empty linked lists representing two non-negative integers. 
 The digits are stored in reverse order and each of their nodes contain a single digit.
 Add the two numbers and return it as a linked list.
 
 You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 
 Example:
 
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 Explanation: 342 + 465 = 807.
 
 
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
struct ListNode{
    ListNode* next;
    int val;
    ListNode(int v){
        val  = v;
    }
    
};


using namespace std;
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int c =0;
    ListNode * ans = new ListNode(0);
    ListNode * head = ans;
    while(l1!=NULL || l2!=NULL){
        int x = (l1!=NULL)?l1->val:0;
        int  y = (l2!=NULL)?l2->val:0;
        int sum = x+y+c;
        if (sum>9)c=1;
        else c=0;
        ans->next = new ListNode(sum%10);
        ans = ans->next;
        if(l1!=NULL)l1 = l1->next;
        if(l2!=NULL)l2= l2->next;
    }
    
    return head->next;
}

