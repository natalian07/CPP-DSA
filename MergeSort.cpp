#include<iostream>
using namespace std;
int mergeArray(int nums1[], int nums2[], int ans[], int n, int k)
{
    int i = 0;
    int j = 0;
    int l = 0;
    while ((i < n) && (j < k))
    {
        if (nums1[i] < nums2[j])
        {
            ans[l++] = nums1[i++];
        }
        else
        {
            ans[l++] = nums2[j++];
        }
    }
    if (i < n)
    {
        while (i < n)
        {
            ans[l++] = nums1[i++];
        }
    }
    if (j < k)
    {
        while (j < k)
        {
            ans[l++] = nums2[j++];
        }
    }
    return l;
}

void mergeSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    int nums1[n / 2];
    int nums2[n - n / 2];
    for (int i = 0; i < n / 2; i++)
    {
        nums1[i] = arr[i];
    }
    for (int i = 0; i < n - n / 2; i++) 
    {
        nums2[i] = arr[i + n / 2];
    }
    mergeSort(nums1, n / 2);
    mergeSort(nums2, n - n / 2);
    mergeArray(nums1, nums2, arr, n / 2, n - n / 2);
}

int main()
{
    int arr1[] = {10,2,20,3,5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int ans[n];
    mergeSort(arr1, n);
    cout << "Sorted Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}