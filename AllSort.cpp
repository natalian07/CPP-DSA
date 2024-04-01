//Using Vector
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr) 
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int>& arr) 
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) 
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) 
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void insertionSort(vector<int>& arr) 
{
    int n = arr.size();
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(vector<int>& arr, int l, int m, int r) 
{
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) 
{
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main() 
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    vector<int> temp_arr;

    temp_arr = arr;
    bubbleSort(temp_arr);
    cout << "Bubble Sort: ";
    for (int i = 0; i < n; i++) 
    {
        cout << temp_arr[i] << " ";
    }
    cout << endl;

    temp_arr = arr;
    selectionSort(temp_arr);
    cout << "Selection Sort: ";
    for (int i = 0; i < n; i++) 
    {
        cout << temp_arr[i] << " ";
    }
    cout << endl;

    temp_arr = arr;
    insertionSort(temp_arr);
    cout << "Insertion Sort: ";
    for (int i = 0; i < n; i++) 
    {
        cout << temp_arr[i] << " ";
    }
    cout << endl;

    temp_arr = arr;
    mergeSort(temp_arr, 0, n - 1);
    cout << "Merge Sort: ";
    for (int i = 0; i < n; i++) 
    {
        cout << temp_arr[i] << " ";
    }
    cout << endl;

    return 0;
}