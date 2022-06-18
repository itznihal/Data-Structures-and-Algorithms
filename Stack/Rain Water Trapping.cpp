#include <bits/stdc++.h>
using namespace std;

int findWater(int arr[], int n)
{
	
//    ->Approach
//     1)Find maxl array
//     2)find maxr array
//     3)ans = sum of water[i]=min(maxl[i] , maxr[i])-arr[i]

//maxl and maxr array 
int maxl[n];
int maxr[n];

int maxl[0] = arr[0];
for(int i=1 ; i<n ; i++)
    maxl[i] = max(maxl[i-1] , arr[i]);

int maxr[n-1] = arr[n-1];
for(int i=n-2 ; i>=0 ; i--)
    maxr[i] = max(maxr[i+1] , arr[i]);

//ans = sum of water[i] = min(maxl[i] , maxr[i])-arr[i]

int water[n] , ans=0;
for(int i=0 ; i<n ; i++){
    water[i] = min(maxl[i] , maxr[i])-arr[i];
    ans += water[i];
}
 
    

	return ans;
}

// Driver program
int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum water that can be accumulated is "
		<< findWater(arr, n);
	return 0;
}
