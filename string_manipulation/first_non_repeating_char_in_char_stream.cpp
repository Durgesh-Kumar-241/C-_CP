
/*

InterviewBit solution
https://www.interviewbit.com/problems/first-non-repeating-character-in-a-stream-of-characters/

Given a string A denoting a stream of lowercase alphabets. You have to make new string B.

B is formed such that we have to find first non-repeating character each time a character is inserted to the stream and append it at the end to B. If no non-repeating character is found then append '#' at the end of B.

*/

#include<bits/stdc++.h>

string Solution::solve(string s)
{

list<int> mList;
unordered_map<char,int> myMap;
string ans;

for(char c: s)
{
    ++myMap[c];
    if(myMap[c]==1)
    {
        mList.push_back(c);
        //cout << "pushed "<< c << endl;
    } 

    while(!mList.empty()&&myMap[mList.front()]>1)
        mList.pop_front();

    if(mList.empty())
        ans+='#';
    else ans+=mList.front();


    
}

//cout << "answer " << ans << endl;
return ans;

}
