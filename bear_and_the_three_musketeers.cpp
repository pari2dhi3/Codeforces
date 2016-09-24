#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int p[4000][4000], q[4000];
int main()
{
	ios_base::sync_with_stdio(false);
	int i,j,x,y,n,m,a,b,min,flag1,flag2,flag3,count;
	cin >> m >> n;
	for(i=0;i<n;i++)
	{
		cin >> x >> y;
		q[x]++;
		q[y]++;
		p[x][y]=1;
		p[y][x]=1;
	}
	min=4000;
	flag3=0;
	for(j=1;j<=m;j++)
	{
		for(i=1;i<=m;i++)
		{
			if((p[i][j]==1)&&(flag1==0))
			{
				a=i;
				flag1=1;
			}
			else if((p[i][j]==1)&&(flag1==1))
			{
				b=i;
				flag2=1;
			}
			if((flag1==1)&&(flag2==1))
			{
				if(p[a][b]==1)
				{
					flag3=1;
					count=q[j]+q[a]+q[b];
					if(count<min)
						min=count;
					else
					{
						flag1=0;
						flag2=0;
					}
				}
				else
				{
					flag1=0;
					flag2=0;
				}
			}
		}
	}
	if(flag3==1)
		cout << min-3 << endl;
	else
		cout << "-1" << endl;
	return 0;
}

						





