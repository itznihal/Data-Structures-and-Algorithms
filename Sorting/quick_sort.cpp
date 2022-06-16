#include<bits/stdc++.h>
using namespace std;

int partation(int arr[] , int l , int r){

int pivot = arr[r];
i = l-1;

for(int j=l; j<r-1 ; j++){

if(arr[j] < pivot )
{
    i++;
    swap(i , j)
}
swap(i+1 , r);

return i+1;

}

}

void quicksort(int arr[] , int l , int r){
if(l<r){

int p = partation(arr , l , r);
quicksort(arr , l , p-1);
quicksort(arr , p+1 , r);

}

}



int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);

    return 0;
}