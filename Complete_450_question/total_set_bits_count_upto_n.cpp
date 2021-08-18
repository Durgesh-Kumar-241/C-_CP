int countSetBits(int n)
    {
        // Your logic here
        if(n<2)
        return n;
        
        int p = log2(n);
        return 1+p*(1<<p-1)+countSetBits(n-(1<<p))+(n-(1<<p));
        
    }
