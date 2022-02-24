#include<bits/stdc++.h>
using namespace std;

bool isTrue(int arr[], int n, int k, int final)
{
	int std=1, page=0;
	for(int i=0;i<n; i++)
	{
		if(page+arr[i]>final)
		{
			std++;
			page=arr[i];
		}
		else{
			page+=arr[i];
		}
		return final;
	}
}

int pages(int arr[], int n, int k)
{
	int sum=0, mx=0;
	for(int i=0;i<n; i++)
	{
		sum+=arr[i];
		mx=max(mx,arr[i]);
	}
	int low=mx, high=mx, ans=0;
	int mid=low+(high-low)/2;
	while(low<=high)
	{
		if(isTrue(arr, n, k, mid))
		{
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		return ans;
	}
}
int main()
{
	int n=4;
	int arr[n]={10,20,10,30};
	cout<<pages(arr,n,2);
}
