#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    int mid;
    int low=0;
    int hi=n-1;
    bool found=false;
    cout<<"Enter the element to search:";
    cin>>key;
    while(low <= hi)
    {
        mid=low+(hi-low)/2;
        if(arr[mid]==key)
        {
            cout<<"Number is found at index:"<<mid<<endl;
            found=true;
            break;
        }
        else if(key > arr[mid])
        {
            low=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    if (!found)
    {
        cout<<"Number is not found"<<endl;
    }
    return 0;
}