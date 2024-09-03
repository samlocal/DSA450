#include<bits/stdc++.h>
using namespace std;

void takeInput(int arr[],int n)
{
    for(int i=0;i<n;i++) cin>>arr[i];
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"\n";
}

void rotateArrayByOne(int arr[],int start,int end)
{
    int lastElement=arr[end];

    for(int i=end;i>start;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[start]=lastElement;
}

int main()
{
    int n;
    cout<<"Enter size:\n";
    cin>>n;

    int arr[n];
    takeInput(arr,n);

    for(int i=0;i<n;i++)
    {
        if(i%2==0 && arr[i]>0)
        {
            int j=i+1;
            while(j<n && arr[j]>0) j++;
            if(j<n) rotateArrayByOne(arr,i,j);
        }
        else if(i%2==1 && arr[i]<0)
        {
            int j=i+1;
            while(j<n && arr[j]<0) j++;
            if(j<n) rotateArrayByOne(arr,i,j);
            
        }
    }

    print(arr,n);
}