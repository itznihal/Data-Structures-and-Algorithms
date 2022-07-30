#include<bits/stdc++.h>
using namespace std;

int print_row_col(int n , int m){



//Seive array -> mark 
//ans matrix -> accoding num prime and its multipliers 
//Search m in matrix ->  Return (i+1)*(j+1)


vector<vector<int>> arr;
vector<int> visit(n+1 , 0);
visit[0] = 1;
visit[1] = 1;


int i;
for( i =0  ; i*i<=n ; i++){

if(visit[i] == 0){


vector<int> temp;
temp.push_back(visit[i]);


for(int j = i*i ; j<=n ; j+=i){

    if(visit[i] == 0){
    visit[j] = 1;
temp.push_back(visit[j]);
    }
}
arr.push_back(temp);
}


}

//Reamining out of root value but unmarked 
for(int x =i ; x< n ; x++){

if(visit[x] == 0){
    //prime number 
    arr.push_back({x});
}

}

//Traverse 2d matrix -> Find M and return -> (i+1) * (j+1)
int ans ;

for(int i=0 ; i< arr.size() ; i++){
    for(int j = 0 ; j< arr[i].size() ; j++){
        if(arr[i][j] == m){
            ans = (i+1)*(j+1);
            break;
        }
    }
}

return ans;





}


int main(){
int n,m;

cin >> n >> m;
print_row_col( n , m);

    return 0;

}