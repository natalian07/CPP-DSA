#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    int sum=0;
    float avg;
    cout<<"Enter array elements:";
    for (i=0;i<5;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum of Array:"<<sum<<endl;
    avg=sum/5;
    cout<<"Average of Array:"<<sum<<endl;
    return 0;
}