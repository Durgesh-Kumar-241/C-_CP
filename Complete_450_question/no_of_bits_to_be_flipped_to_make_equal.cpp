 int as = log2(a);
        int bs = log2(b);
        int t = max(as,bs);
        int ct=0;
        for(int i=0;i<=t;i++)
        {
            bool b1 = !(a&1<<i);
            bool b2 = !(b&1<<i);
            if(b2!=b1)
            ct++;
            
        }
        return ct;
