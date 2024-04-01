#include<iostream>
using namespace std;
int main()
{
    int arr[2][2];
    int arr1[2][2];
    int sum[2][2];
    int i,j;
    cout<<"Enter array elements in Array 1:";
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
        cin>>arr[i][j];
        }
    }
    
    cout<<"Enter array elements in Array 2:";
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
        cin>>arr1[i][j];
        }
    }

    // Addition of Arrays
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
          sum[i][j]=arr[i][j]+arr[i][j];
        }
    }
    
    cout<<"Sum of 2 matrix:"<<endl;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
          cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}