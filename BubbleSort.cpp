#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag)
        {
            break;
        }
    }
    cout<<"Sorted Array:"<<endl;
    for (int i = 0; i < 7; i++) //Print sorted array
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[] = {3, 4, 5, 6, 3, 2, 1};
    int n = 7; // size of array
    bubbleSort(array,n);
}