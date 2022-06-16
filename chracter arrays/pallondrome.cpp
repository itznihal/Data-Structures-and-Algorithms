#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin>>n;

    char arr[n+1];
// cin >> arr;
cin.getline(arr , n);
 
int i=0;
int j =n-1;
bool flag = true;


while(i<j){
    if(arr[j] != arr[j]){
        flag = false;
    break;

    }
}

if(flag == true){
    cout << "pallindrome";

}
else{
    cout << "not poallindrome";
    
}



 return 0;
}