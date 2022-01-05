#include<bits/stdc++.h>
using namespace std;
int countOne(int arr[], int n)
{
	int high=n-1;
	int low=0;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(mid==0)
		{
			arr[mid]=low+1;
		}
		else{
			if(mid==0 || arr[mid-1]==0)
			{
				return (n-mid);
			}
			else{
				high=mid-1;
			}
		}
	}
}
int main()
{
	int n=6;
	int arr[]={0,0,1,1,1,1};
	int x=1;
	cout<<countOne(arr,n);
}
