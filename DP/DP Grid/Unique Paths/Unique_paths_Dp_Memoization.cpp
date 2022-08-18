#include <bits/stdc++.h>





int f(int i , int j , vector<vector<int>> &dp){
    
    //Base Condition 
    if(i==0 && j==0){
     return 1;
    }
    
    if(i<0 || j<0){
        return 0;
    }
    
    //Call
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    
    
    //Calc
    int up = f( i-1, j , dp);
    int down = f( i , j-1 , dp);
    
    return dp[i][j] = up+down;
    
}


int uniquePaths(int m, int n) {
	// Write your code here.
    
    //Recursive 
  
    //Memoization
    
         /*Declare -> Store -> Call*/   
      vector<vector<int>>dp(m,vector<int>(n,-1));
    //Tabulation 
    //Tabulation Space Optimized
    
    
    
    
    //Recursive
    return f(m-1 , n-1 , dp);
    
    
    
}