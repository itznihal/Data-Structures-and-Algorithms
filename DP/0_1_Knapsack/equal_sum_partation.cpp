#include<bits/stdc++.h>

/*
//Steps
1)Total sum of array 
if sum odd -> no partation possible
if sum even -> send half into subset sum if true then equal sum possible
*/

bool isSubsetSum(int arr[], int n, int sum) 
{ 
	// The value of subset[i][j] will be true if 
	// there is a subset of set[0..j-1] with sum 
	// equal to i 
	
	bool t[n + 1][sum + 1]; 

	


//initialize
	for (int i = 0; i <= n; i++) { 
		for (int j = 0; j <= sum; j++) { 
			 
			if(j == 0){
				t[i][j] = true;

			}	
			else if(i == 0){
				t[i][j] = false;
			}		
		} 
	} 



	// Fill the subset table in bottom up manner 
	for (int i = 1; i <= n; i++) { 
		for (int j = 1; j <= sum; j++) { 
			 
			if (arr[i-1] <= j){ 
				t[i][j] = t[i - 1][j] 
							|| t[i - 1][j - arr[i - 1]]; }
			else{
t[i][j] = t[i-1][j];
			}				
		} 
	} 

	return t[n][sum]; 
} 



bool equalsum(vector<int>& v){

//  Sum of allm element 
int sum =0;
for(int i=0 ; i<v.size() ; i++){
sum = sum +v[i];
}

if(sum %2 == 0){
    return isSubsetSum(v , v.size()  , sum/2);
}
else{
    return false;
}


}