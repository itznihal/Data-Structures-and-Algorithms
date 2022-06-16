#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;

cin >> n;
char arr[n+1];


cin >> arr;
// or
cin.getline(arr , n);
cin.ignore();


int i=0;
while(arr[i] != '\0'){
    cout << arr[i];
}




 return 0;
}