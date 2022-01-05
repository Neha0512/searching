#include<bits/stdc++.h>
using namespace std;
int countofOcc(int arr[],int x, int n)
{
	
int count=0;
	for(int i=0;i<n;i++)
		if(x==arr[i])
			count++;
				return count;
}
int main()
{
	int n=6;
	int arr[]={4,5,7,7,7,7};
	int x=7;
	cout<<countofOcc(arr,x,n);
}
