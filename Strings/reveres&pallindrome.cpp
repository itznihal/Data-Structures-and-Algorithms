#include<bits/stdc++.h>
using namespace std;
int main()
{


string str;
getline(cin , str);
int flag;

// Reverse
int low = 0;
int high = str.length() - 1;

while(low<high){

swap(str[low] , str[high]);

// for check pallindrome
if(str[low] != str[high]){
    flag = false;
    break;

}




low++;
high--;

}

cout << str;

 return 0;
}