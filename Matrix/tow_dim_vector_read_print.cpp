#include<bits/stdc++.h>
using namespace std;

int main()
{


int n;
int m;

vector<vector<int>> v(n , vector<int> (m));


// Read
  for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j] ;
        }
    }
  

//   Print
  for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }




 return 0;
}