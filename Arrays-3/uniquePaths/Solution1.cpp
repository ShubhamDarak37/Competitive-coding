class Solution {
public:
    
    int pathCount = 0;
    
    void movePos(int m, int n, int i,int j)
    {
        if(i==m-1 && j==n-1)
        {
            pathCount++;
            return;
        }
        if(i>m-1 || j>n-1)
        {
            return;
        }
        movePos(m,n,i+1,j);
        movePos(m,n,i,j+1);
    }
    
    int uniquePaths(int m, int n) 
    {
        movePos(m, n, 0, 0);
        return pathCount;
    }
};