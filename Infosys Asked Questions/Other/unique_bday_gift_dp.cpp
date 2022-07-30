

/*
****Unique Birthday Gift
Your birthday is coming soon and one of your friends, Alex, is thinking about a gift for you. He knows
that you really like integer arrays with interesting properties.
He selected two numbers, N and K and decided to write down on paper all integer arrays of length K
(in form a[1], a[2], ..., a[K]), where every number a[i] is in range from 1 to N, and, moreover, a[i+1] is
divisible by a[i] (where 1 < i <= K), and give you this paper as a birthday present.
Alex is very patient, so he managed to do this. Now you're wondering, how many different arrays are
written down on this paper?
Since the answer can be really large, print it modulo 10000.
Input:
The first line contains an integer, n, denoting the maximum possible value in the arrays.
The next line contains an integer, k, denoting the length of the arrays.
Sample cases:
Input Output Output description
2
1
2 The required length is 1, so there are only two possible arrays: [1]
and [2].
2
2
3 All possible arrays are [1, 1], [1, 2], [2, 2].
[2, 1] is invalid because 1 is not divisible by 2.
3
2
5 All possible arrays are [1, 1], [1, 2], [1, 3], [2, 2], [3, 3].
*/



int dfs(int i,int k,int n,vector<vector<int>>&dp){
      if(k==0)
       return 1;
      if(dp[i][k]!=-1)
        return dp[i][k];
      int res=0;
      for(int l=i;l<=n;l++){
        if(l%i==0){
         res= (res%10000 + dfs(l,k-1,n,dp)%10000);
       }
      }
      return dp[i][k]= res%10000;
    }
    
    int findways(int n,int k){
      vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
      int ans=0;
      for(int i=1;i<=n;i++){
         ans= (ans%10000 + dfs(i,k-1,n,dp)%10000);
      }
      return ans;
    }