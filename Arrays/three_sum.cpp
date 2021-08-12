/*

Leetcode 
https://leetcode.com/problems/3sum/description/
15. 3Sum
Description
Hints
Submissions
Discuss
Solution
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []
 

Constraints:

0 <= nums.length <= 3000
-105 <= nums[i] <= 105

*/


class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> vs; 

      if(nums.size()<3)

          return vs;

          sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++)

            {

           //int comp = 0-nums[i];

           if(i>0&&nums[i]==nums[i-1])

                continue;

               

            start:

            int l= i+1;

            int r= nums.size()-1;

            

            while(l<r)

                {

               //int lr=l+r;

                if(nums[l]+nums[r]+nums[i]==0)

                    {

                    vs.push_back({nums[i],nums[l],nums[r]});

                    //goto outer;

                   // i++;

                    //goto start;

                   l++; 

                   

                    

                    }

                else if(nums[l]+nums[r]+nums[i]<0)

           l++;

             else r--;

              

                

                }

            //outer:

            

            }

        

        set<vector<int>> st;

        for(auto a : vs)

            st.insert(a);

        

      vs.clear();

        

        for(auto a: st)

            vs.push_back(a);

        

        

        

     return vs;   

    }

};
