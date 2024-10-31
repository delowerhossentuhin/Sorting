#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void Selection_Sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int m=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[m])
            {
                m=j;
            }
        }
        if(m!=i)
        {
            swap(arr[i],arr[m]);
        }
    }
}
void Print_Array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Selection sort: ";
    Print_Array(arr,n);
    Selection_Sort(arr,n);
    cout<<"After Selection sort: ";
    Print_Array(arr,n);
}