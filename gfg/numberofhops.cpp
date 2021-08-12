class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int mod = 1e9 + 7;
    long long countWays(int n)
    {
        
        long long dp[n+1];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for(int i = 4; i<=n ; i++)
        {
            dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % mod;
        }
        return dp[n]; 
    }
};