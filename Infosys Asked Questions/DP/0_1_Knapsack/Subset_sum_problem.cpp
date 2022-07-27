// A Dynamic Programming solution 
// for subset sum problem 

/*
Pattern:
Declare matrix of changing value in recursion 
Travese Matrix -> rec base condition  into inilization
Traverse matrix and fill other values based on base conditions(inilization)
return last element of matrix is Ans 
*/
#include <stdio.h> 

// Returns true if there is a subset of set[] 
// with sum equal to given sum 
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

// Driver code 
int main() 
{ 
	int set[] = { 3, 34, 4, 12, 5, 2 }; 
	int sum = 9; 
	int n = sizeof(set) / sizeof(set[0]); 
	if (isSubsetSum(set, n, sum) == true) 
		printf("Found a subset with given sum"); 
	else
		printf("No subset with given sum"); 
	return 0; 
} 
// This code is contributed by Arjun Tyagi. 
