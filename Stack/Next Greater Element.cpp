
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printNGE(int arr[], int n)
{
  //can reduce time complexity using stack


  //steps
// 1)traverse array from last put into stack with conditional
// -stack -> empty -> ans.push_back(-1);
// - s.top()>arr[i] -> ans.push_back(s.top);
// -s.top()<arr[i] -> pop till s.top()>arr[i] or s.size()==0 + push it into asin

// -push arr[i] into stack traverse next
//2)Traversing right -> left so reverse ans vector 
// 3)Print ans vector





  vector<int> ans;
  stack<int> s;
  for(int i=n-1 ; i>=0 ; i--){
    
    if(s.size()==0){
    ans.push_back(-1);
    }
    
   else if(s.size()>0 && s.top()>arr[i]){
     ans.push_back(s.top());
     }
    else if(s.size()>0 && s.top()<=arr[i]){
      
    while(s.size()>0 && s.top()<=arr[i]){
      s.pop();
    }
       
      if(s.size()==0){
      ans.push_back(-1);
      }
      
      else{
      ans.push_back(s.top());
      }
      
    }
    s.push(arr[i]);
  }
  
  reverse(ans.begin() , ans.end());
      for(int i=0  ; i<ans.size(); i++){
        
		cout << arr[i] << " -- " << ans[i] << endl;
	}
}

// Driver Code
int main()
{
	int arr[] = {11, 13, 21, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}


