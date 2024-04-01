#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) 
{
  for (int i = 0; i < n - 1; i++) 
  {
    int indexMin = i;
    for (int j = i + 1; j < n; j++) 
    {
      if (arr[j] < arr[indexMin]) 
      {
        indexMin = j;
      }
    }
    swap(arr[indexMin], arr[i]);
  }

  cout<<"Sorted Array:"<<endl;

  for (int i = 0; i <= n - 1; i++) 
  {
    cout<<arr[i]<< " ";
  }
}

int main() 
{
  int array[] = {10, 8, 5, 6, 9, 15, 2};
  int size = 7;
  selectionSort(array, size);
}