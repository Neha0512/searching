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
int main()
{
	int n=5;
	int arr[]={2,4,6,6,6,7};
	int x=6;
	cout<<firstOcc(arr, n-1, 0, x);
}

