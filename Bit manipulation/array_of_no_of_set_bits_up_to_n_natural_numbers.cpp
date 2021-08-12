/*

Leetcode
https://leetcode.com/problems/counting-bits/submissions/
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

*/


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+3,0);
        for(int i=1;i<=(n+1)/2;i++)
        {
            if(i&1)
                v[i]=v[i/2]+1;
            else v[i] = v[i/2];
            
            v[i*2]=v[i];
            v[i*2+1]=v[i]+1;
            
            
        }
        v.pop_back();
        v.pop_back();
      return v; 
 
    }
};
