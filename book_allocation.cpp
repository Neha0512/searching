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
			if(std>k||arr[i]>final)
			{
				return false;
			}
			page=arr[i];
		}
		else{
			page+=arr[i];
		}
	
	}
		return true;
}

int pages(int arr[], int n, int k)
{
	int sum=0, maxi=0;
	for(int i=0;i<n; i++)
	{
		sum+=arr[i];
		maxi=max(maxi,arr[i]);
	}
	int low=maxi, high=sum, ans=0;
	
	while(low<=high)
	{
	int mid=low+(high-low)/2;
		if(isTrue(arr, n, k,mid))
		{
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	
	}
		return ans;
}
int main()
{
	int n=4;
	int arr[n]={10,20,10,30};
	cout<<pages(arr,n,2);
}
