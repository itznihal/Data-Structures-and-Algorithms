#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int n;
  cin >> n;
  
  int arr[n];
  
  for (int i = 0; i < n; i++) cin >> arr[i];
  
  int M = 1 << 20;
  int dp[M];
  char res[M];
  
  for (int i = 1; i < M; i++)
    dp[i] = INT_MAX;
  
  for (int i = 0; i < n; i++)
    {
      if (arr[i] == 0)
	   continue;
      
      for (int j = 0; j < M; j++)
	    res[j] = 0;
      
      for (int k = 0; k < M; k++) { if (res[k] == 1) continue; if (dp[k] > dp[k ^ arr[i]])
	       dp[k] = dp[k ^ arr[i]] + 1;
	  
         else if (dp[k ^ arr[i]] > dp[k])
	       dp[k ^ arr[i]] = dp[k] + 1;
	     
	     res[k ^ arr[i]] = 1;
	      
	  }
    }
  
 int j = M - 1, k = n >> 1;
  
  while (dp[j] > k)
    j--;
  
  cout << j;
  
  return 0;

}