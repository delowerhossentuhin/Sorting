#include<iostream>
using namespace std;

void merge(int arr[],int low,int high,int mid)
{
    int i=low,k=0,j=mid+1,temp[high-low+1];
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }
    while(i<=mid )temp[k++]=arr[i++];
    while(j<=high )temp[k++]=arr[j++];
    for(int i=low;i<=high;i++)arr[i]=temp[i-low];
}
void mergesort(int arr[],int low,int high)
{
    int mid=(low+high)/2;
    if(low<high)
    {
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}

void view(int arr[],int size)
{
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={3,5,7,1,4,7,2,9,0,3,6,2,8,7,11,2,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=size-1;
    mergesort(arr,low,high);
    view(arr,size);
}