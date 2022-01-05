#include<bits/stdc++.h>
using namespace std;
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
int main()
{
	int n=6;
	int arr[]={10,10,10,10,20,20};
	int x=20;
	cout<<lastOcc(arr, n-1, 0, x, n);
}
