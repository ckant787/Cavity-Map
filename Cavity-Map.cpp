#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	char arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>arr[i][j];
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if((int)arr[i][j]>(int)arr[i-1][j]&&(int)arr[i][j]>(int)arr[i][j-1]&&(int)arr[i][j]>(int)arr[i][j+1]&&(int)arr[i][j]>(int)arr[i+1][j])
			{
				arr[i][j]='X';
			}
			else
			continue;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		cout<<arr[i][j];
	}
	cout<<endl;
	}
	
}
