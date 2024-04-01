#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int var = arr[i]; //Taken first element as sorted
        for (j = i - 1; j >= 0; j--)
        {
            //Making comparisons
            if (arr[j] > var)
            {
                //Shifting elements
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = var;
    }
    cout << "Sorted Array:" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        //Printing the array after being sorted
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[] = {9, 45, 23, 71, 80, 55};
    int size = 6;
    insertionSort(array, size);
}

