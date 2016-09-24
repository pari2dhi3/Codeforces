#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,i,count,turn,flag;
	vector<int> a(1000,0);
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	count=0;
	turn=0;
	flag=0;
	while(count!=n)
	{
		for(i=0;i<n;i++)
		{
			if((a[i]<=count)&&(a[i]!=-1))
			{
				count++;
				a[i]=-1;
				if(count==n)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
			turn++;
		else
			break;
		for(i=(n-1);i>=0;i--)
		{
			if((a[i]<=count)&&(a[i]!=-1))
			{
				count++;
				a[i]=-1;
				if(count==n)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
			turn++;
		else
			break;
	}
	cout << turn << endl;
	return 0;
}

