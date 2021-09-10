/*

InterviewBit
https://www.interviewbit.com/problems/sliding-window-maximum/


Given an array of integers A.  There is a sliding window of size B which 

is moving from the very left of the array to the very right. 

You can only see the w numbers in the window. Each time the sliding window moves 

rightwards by one position. You have to find the maximum for each window. 

The following example will give you more clarity.

The array A is [1 3 -1 -3 5 3 6 7], and B is 3.

Window position	Max
———————————-	————————-
[1  3  -1] -3  5  3  6  7	3
1 [3  -1  -3] 5  3  6  7	3
1  3 [-1  -3  5] 3  6  7	5
1  3  -1 [-3  5  3] 6  7	5
1  3  -1  -3 [5  3  6] 7	6
1  3  -1  -3  5 [3  6  7]	7
Return an array C, where C[i] is the maximum value of from A[i] to A[i+B-1].

Note: If B > length of the array, return 1 element with the max of the array.





*/






vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    map<int,int> mp;
    vector<int> v;
    for(int i=0;i<B;i++)
    mp[A[i]]++;
    v.push_back(mp.rbegin()->first);


    for(int i=B;i<A.size();i++)
    {   //cout<<A[i-B]<<" "<<mp[A[i-B]]<<" ";
        mp[A[i-B]]--;
        //cout<<A[i-B]<<" "<<mp[A[i-B]]<<" ";
        if(mp[A[i-B]]==0)
        mp.erase(A[i-B]);
        mp[A[i]]++;
        v.push_back(mp.rbegin()->first);
    }

    return v;
}
