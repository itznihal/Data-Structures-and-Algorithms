#include <bits/stdc++.h>





int f(int i , int j){
    
    //Base Condition 
    if(i==0 && j==0){
     return 1;
    }
    
    if(i<0 || j<0){
        return 0;
    }
    
    //Calc
    int up = f( i-1, j);
    int down = f( i , j-1);
    
    return up+down;
    
}


int uniquePaths(int m, int n) {
	// Write your code here.
    
    //Recursive 
    //Memoization
    //Tabulation 
    //Tabulation Space Optimized
    
    
    
    
    //Recursive
    return f(m-1 , n-1);
    
    
    
}