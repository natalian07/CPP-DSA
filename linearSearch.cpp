#include<iostream>
using namespace std;
int main()
{
    int a[5],key;
    int i;
    cout<<"Enter 5 elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter no. to search:";
    cin>>key;
    for(i=0;i<5;i++)
    {
        if(key==a[i])
        {
            cout<<"No found at index:"<<i<<endl;
            break;
        }
        if(i==5)
        {
            cout<<"No not found:"<<endl;
        }
    }
    return 0;
}