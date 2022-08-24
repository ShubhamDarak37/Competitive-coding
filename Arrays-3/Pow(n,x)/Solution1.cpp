class Solution {
public:
    double myPow(double x, int n) 
    {
        if(x==0)
            return 0;
        if(n==0)
            return 1;
        double res = 1;
        long long tempn = n;
        if(n<0)
            tempn = -1.0 * n;
        while(tempn)
        {
            if(tempn%2)
            {
                res = res * x;
                tempn -= 1;
            }
            else
            {
                x = x * x;
                tempn = tempn/2;
            }
        }
        if(n<0)
            return 1/res;
        
        return res;
    }
};