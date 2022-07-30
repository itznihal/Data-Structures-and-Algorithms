#include<bits/stdc++.h>
using namespace std;


int odd_sub_array(int arr[] , int n){
//Traverse subarray -> keep updating sum
int cnt =0;
for(int i=0 ; i<n ; i++){
int sum = 0 ; 

for(int j =i ; j<n ; j++ ){
    sum += arr[j];

    if(sum%2 != 0){
        cnt++;
    }
}

}
return cnt;


}

int main(){

int arr[3] = {1,2,3};
cout << odd_sub_array(arr , 3) ;
    return 0;
}