 vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        unordered_map<int,int> mp;
        for(int n : nums)
        mp[n]++;
        
        set<int> ms;
        for(auto a : mp)
        if(a.second==1)
        ms.insert(a.first);
        
        return {*ms.begin(),*++ms.begin()};
    }
