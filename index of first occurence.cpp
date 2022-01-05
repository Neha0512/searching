//O(n) time & O(1) time

#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int x, int n)
{

	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
		return -1;
}
int main()
{
		int n=6;
	int arr[]={2,3,5,5,6,8};
	int x=6;
	cout<<firstOccurence(arr,x,n);
	return 0;
}
