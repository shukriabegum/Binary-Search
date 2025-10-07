#include<iostream>
using namespace std;
int binarySearch(int n, int a[],int value)
{
    int left=0,right=n-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==value)
        {
            return mid;
        }
        else if(a[mid]<value)
        {
            left=mid+1;
        }
        else
            right = mid-1;
    }
    return -1;
}
int main (){


int i,n,value;
    cout<<"Enter a size:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<"Enter the value you want to search:";
cin>>value;
int index=binarySearch(n,a,value);
if(index!=-1)
{
    cout<<value<<"Found at index"<<index;
}
else
    cout<<value<<"Not found";
}
