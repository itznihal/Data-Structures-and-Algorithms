#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n , m;
    cin >> n;
    cin >> m;
     vector <vector<int>> v( n , vector<int>(m));

     for(int i = 0 ; i<v.size() ; i++)
     {
         for(int j=0 ; j< v[0].size() ; j++){
             cin >> v[i][j];

         }
     }




    //  Spiral order traversal


    int rs , re , cs , ce;
    rs = v[0][0];
    re = v[n][0];
    cs = v[0][0];
    ce = v[0][m];


    while(rs<=re &&  cs <= ce){

for(int i = cs ; i< ce ; i++){
    cout << v[rs][i];

}

rs++;


for(int i = rs ; i< re ; i++){
    cout << v[i][ce];
    
}

ce--;


for(int i = ce ; i< cs ; i++){
    cout << v[re][i];
    
}



re--;

for(int i = re ; i< rs ; i++){
    cout << v[cs][i];
    
}

rs++;

    }


 return 0;
}