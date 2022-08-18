
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    
    //iniliazation -> BC
    //Calculation 
    //Return 
    
    
    //inilization 
    vector<vector<int>>dp(n , vector<int>(4 , 0));
    
    dp[0][0] = max(points[0][1] , points[0][2]);
    dp[0][1] =  max(points[0][0] , points[0][2]);
        dp[0][2] =  max(points[0][1] , points[0][0]);
        dp[0][3] =  max(points[0][0] ,  max(points[0][1] , points[0][2]));
    
    
    //    Calculation -> Bottom up
    for(int day =1 ; day< n ; day++){
        for(int last = 0 ; last<4 ; last++){
        
        for(int task = 0 ; task<4 ; task++){
            
            if(task != last){
             int point = points[day][task] + dp[day-1][task];
                
                dp[day][task] = max(dp[day][last] , point);
            }
        }
            
    
            return dp[day][last];
        }
            
        }
    
    };
    
        
    
    
    
    
    
    
    
