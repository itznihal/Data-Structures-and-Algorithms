#include <bits/stdc++.h>
using namespace std;

// SELECTIION SORT - SELECT MIN ELEMENT FROM ARRAY AND PUT IT INTO SORTED ARRAY
void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (arr[j] < arr[i])
            {

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

// BUBBLE SORT - REPEATATLY SWAP ELEMENT IN ARRAY WHICHH AR IN WRONG ORDER AND PUT MAX ELEMENT AT THE END IN EVERY ITERATION
void bubblesort(int arr[], int n)
{

    int count = 1;
    while (count < n)
    {

        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        count++;
    }
}

// INSERTION SORT - INSERT AND ELEMMENT FROM UNSORT ARRAY TO SORTED ARRAY
void insertionsort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
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
    selectionsort(arr, n);
    bubblesort(arr, n);
    insertionsort(arr, n);

    return 0;
}