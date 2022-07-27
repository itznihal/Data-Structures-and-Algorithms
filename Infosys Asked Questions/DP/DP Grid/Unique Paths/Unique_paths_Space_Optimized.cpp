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
      //vector<vector<int>>dp(m,vector<int>(n,-1));
    //Tabulation 
    //Declare -> initialize -> Calc-> Return 
    //Tabulation Space Optimized
    
    
    
    
    //Recursive
    //return f(m-1 , n-1 , dp);
   
    
    //int dp[m][n];
    vector<int> prev(n,0);
    
    
    for(int i = 0 ; i<m ; i++){
        vector<int> curr(n , 0);
        
        for(int j =0 ; j<n ; j++){
            
            //init
            if(i==0 && j==0){curr[j] = 1;}
            
            else{
                int up =0;
                int left =0;
                
                if(i>0){
                    up = prev[j];
                }
                if(j>0){
                    left = curr[j-1];
                }
                
                curr[j] = up+left;
                
                
            }
            
            
        }
        prev = curr;
    }
    return prev[n-1];
}