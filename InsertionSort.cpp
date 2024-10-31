#include<iostream>
using namespace std;
/*
Time Complexity
Worst Case O(n^2)
Best Case Ω(n)
*/

void Insertion_Sort(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        int m=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>=m)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=m;
        
    }
}
int main()
{
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Insertion_Sort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
