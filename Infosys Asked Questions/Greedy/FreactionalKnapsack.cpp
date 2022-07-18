// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    
    static bool comparator(Item a , Item b){
        
        
        
        double i1 = (double)a.value/ (double)a.weight;
          double i2 = (double)a.value/ (double)a.weight;
          
          return i1 > i2;
          
          
        
        
        
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        //Sort 
        //Traverse -> <W add else franctionbal + add
        
        
       sort( arr , arr+n , comparator); 
        
        //GREEDY
        int current_weight = 0;
        double finalValue = 0.0;
        
        for( int i=0 ; i<n ; i++){
            if( current_weight + arr[i].weight <= W){
                current_weight += arr[i].weight;
                finalValue += arr[i].value;
            }
            else{
                int remain = W - current_weight;
                finalValue += (arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }    
        return finalValue;
        
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends