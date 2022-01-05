// time complexity= O(logn)

#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int high, int low, int x)
{
	if(low>high)
	{
		return -1;
	}
	int mid=(low+high)/2;
	if(arr[mid]>x)
	{
		return firstOcc(arr,mid-1,low,x);
	}
	else if(arr[mid]<mid)
	{
		return firstOcc(arr,high, mid+1, x);
	}
	else
	{
	if(arr[mid]!=arr[mid-1] || mid==0)
	{
		return mid;
	}
	else
	{
		high=mid-1;
	}
}
return -1;
}
int lastOcc(int arr[], int high, int low, int x, int n)
{
	if(low>high)
	{
		return -1;
	}
	int mid=(low+high)/2;
	if(arr[mid]>x)
	{
		return lastOcc(arr, mid-1, low, x, n);
	}
	else if (arr[mid]<x)
	{
		return lastOcc(arr,high, mid+1, x, n);
	}
	else
	{
		if(arr[mid]!=arr[mid+1] || mid==n-1)
		{
			return mid;
		}
		else{
			return lastOcc(arr, high, mid+1, x, n);
		}
	}
	return -1;
}
int countOcc(int arr[],int high, int low, int x, int n)
{
	int first = int firstOccurence(arr,high,low,x);
	if(first==-1)
	{
		return 0;
	}
	else
	{
		return lastOcc(arr, high,low,x,n)-first+1;
	}
}
int main()
{
	int n=6;
	int arr[]={2,5,5,5,5,7,9};
	int x=5;
	cout<<countOcc(arr, high, low, x,n);
}
