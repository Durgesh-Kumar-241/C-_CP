int setBits(int N) {
        int ct =0;
        for(int i=0;1<<i<=N;i++)
        {
            if(N&1<<i)
            ct++;
        }
        return ct;
        // Write Your Code here
    }
