#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int n, int x)
{
	int low=0; 
	int high=n-1;
	while(low<=high)
	{
	int mid=(low+high)/2;
	if(arr[mid]==x)
	{
		return mid;
	}
	else if(arr[mid]>x)
	{
		high=mid-1;
	}
	else
	{
		low=mid+1;
	}
}
	return -1;
}
int main()
{
	int n=5;
	int arr[n]={3,6,8,11,45};
	int x=5;
	cout<<bSearch(arr,5,x); 
	
}

