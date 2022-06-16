#include<bits/stdc++.h>
using namespace std;



void mincoin(int deno[] , int n , int V){

vector<int> ans;
for(i = n-1 ; i>=0 ; i--){

    while(V >= deno[i]){
        v-=deno[i];
        ans.push_back(deno[i]);
    }
}

for(int i = 0 ;i<ans.size()  ; i++){
    cout << arr[i] << "";
}



}


int main(){

// coin array
int deno[] = {1 , 2 , 5 , 10 , 20 , 50 , 100 , 500 , 1000 , 2000};
int n =10;
int v;
cin >> v;
mincoins(deno , n , v);

    return 0;
}