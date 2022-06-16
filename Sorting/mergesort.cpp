#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];

    for (int i = 0; i < n; i++)
        b[i] = arr[mid + i + ];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {

        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
            (b[j] < a[i])
            {
                arr[k] = b[j];
                k++;
                j++;
            }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}


// MERGE SORT -> DIVIDE AND CONQUER TECHNIQUE
// SO PROBLEMS ARE FURTHUR DIVIDED INTO SUBPROBLEMS
void mergesort(int arr[], int l, int r)
{

    if (l < r)
    {
        int mid = l + (r - l) / 2;

        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, mid, r);
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
    mergesort(arr, 0, n - 1);

    return 0;
}