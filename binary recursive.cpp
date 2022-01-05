//recursive binary search
// O(logn) for unsuccessful search
// theta(logn) for successful search
#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int low, int high, int x)
{
	if (low>high)
	{
		return -1;
	}
	int mid=(low+high)/2;
	if(arr[mid]==x)
	{
		return mid;
	}
	else if(arr[mid]>x)
	{
		return bSearch(arr,low,mid-1,x);
	}
	else{
		return bSearch(arr,mid+1,high,x);
	}
}
int main()
{
	int n=6;
	int arr[]={8,13,27,39,45,54};
	int x=54;
	cout<<bSearch(arr, 0, n-1, x);
	return 0;
}
